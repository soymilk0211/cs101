graph LR
    %% 顏色與樣式定義
    classDef frontend fill:#E1F5FE,stroke:#0288D1,stroke-width:2px,color:#000;
    classDef backend fill:#E8F5E9,stroke:#2E7D32,stroke-width:2px,color:#000;
    classDef external fill:#FFF3E0,stroke:#E65100,stroke-width:2px,color:#000;
    classDef future fill:#F5F5F5,stroke:#9E9E9E,stroke-width:2px,stroke-dasharray: 5 5,color:#000;

    subgraph 使用者互動層 (Frontend)
        User((使用者))
        React[React 網頁介面]:::frontend
        User -- 輸入可疑網址 --> React
    end

    subgraph 核心業務邏輯層 (Backend - FastAPI)
        API{API Gateway / 路由}:::backend
        Crawler[爬蟲微服務模組]:::backend
        AI_Engine[AI 查核分析引擎]:::backend
        
        React -- HTTP POST (JSON) --> API
        API -- 1. 派發抓取任務 --> Crawler
        API -- 2. 傳送清洗後文本 --> AI_Engine
        AI_Engine -- 3. 回傳分析與可信度 --> API
        API -- 4. 回傳最終驗證結果 --> React
    end

    subgraph 外部服務層 (External Services)
        TargetWeb((目標新聞網站)):::external
        LLM((大語言模型 API)):::external
        
        Crawler -- 抓取 HTML/內文 --> TargetWeb
        TargetWeb -. 回傳網頁原始碼 .-> Crawler
        AI_Engine -- Prompt + 內文 --> LLM
        LLM -. 回傳真偽辨證結果 .-> AI_Engine
    end

    subgraph 未來生態系擴充 (Future Work)
        DB[(資料庫與快取機制)]:::future
        SocialBots[Threads / LINE 保鑣]:::future
        
        API -. 寫入/讀取歷史查核紀錄 .-> DB
        SocialBots -. Webhook 觸發查核 .-> API
    end
