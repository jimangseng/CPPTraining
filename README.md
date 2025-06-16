# CPPTraining

### cpp-training-for-xl-shell

이 프로젝트는 **XL Shell**을 본격적으로 구현하기에 앞서,  
**중급 C++ 핵심 기술 20가지**를 탐구하고 구조적으로 정리하기 위한 준비 프로젝트입니다.



## 🎯 프로젝트 목적

- XL Shell의 기술 기반을 다지기 위한 **사전 실험 공간**
- 중급 C++ 기술들을 **개별적으로 설계, 분석, 정리**함으로써 시스템 통합 기반 마련
- 자유로운 방식으로 각 기술을 탐색하고, 실습과 설계 기록을 쌓는 데 목적이 있음

> 선형적인 학습이 아닌, **기술 주제별 독립적 탐색 및 실험**을 지향합니다.



## 🧩 탐구 기술 항목

**리소스 관리**
- 스마트 포인터 (`unique_ptr`, `shared_ptr`)
- RAII
- Object Pool
- LRU Cache

**데이터 구조 및 입출력**
- STL 컨테이너 선택 전략
- 우선순위 큐 (`priority_queue`)
- 파일 입출력
- JSON 직렬화

**설계 패턴 / 시스템 구성**
- Command 패턴 (Undo/Redo 포함)
- 상태기계
- 컴포넌트 시스템
- DI (의존성 주입) + 플러그인 구조
- Logger 시스템

**템플릿 및 표현**
- Type Erasure
- Traits (템플릿 조건 분기)
- Concepts (C++20)
- `std::variant` + `std::visit`
- 람다와 `std::function`

**동시성**
- Thread Pool
- Atomic 연산



## 📁 프로젝트 구조

```
cpp-training-for-xl-shell/
├── topics/
│   ├── 01_smart_pointer.md
│   ├── 02_raii.md
│   ├── ...
├── experiments/
│   ├── object_pool/
│   ├── command_system/
│   └── ...
├── notes/
│   ├── integration-strategy.md
│   └── system-diagram.md
```

- `topics/`: 각 기술에 대한 개념 정리 및 설계 노트
- `experiments/`: 실제 코드 실습 및 모듈 설계 시도
- `notes/`: 기술 통합 전략 및 향후 XL Shell과의 연결 구상



## 🔄 확장 방향

이 프로젝트는 향후 다음과 같이 확장될 수 있습니다:

1. **기술 통합 데모 구성**  
   → 각 기술을 실제 시스템 모듈로 통합한 CLI 시뮬레이터 구성

2. **RTS 혹은 대규모 시뮬레이션으로의 진입**  
   → 본 프로젝트에서 탐색한 모듈들이 대규모 시뮬레이션의 핵심 구성요소로 이전됨
   ex) 군중, 도시, 확산 시뮬레이션 등

4. **학습 리소스화**  
   → 기술별 노트를 개인 위키나 기술 블로그로 정리



## ✅ 이 프로젝트는...

- **XL Shell**의 **기술적 기반을 실험적으로 쌓는 준비 운동**입니다.  
- 핵심은 “작동하는 기술이 아닌, 이해하고 설명할 수 있는 기술”입니다.
