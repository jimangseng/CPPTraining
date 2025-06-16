A. 메모리와 자료구조
- 스마트 포인터
unique_ptr, shared_ptr, weak_ptr을 활용해 소유권 명시 및 수명 관리 구현.
예: std::unique_ptr<Command>를 통해 명령 실행 후 자동 소멸 구조 설계.

- Object Pool
placement new와 미리 할당된 메모리 블록을 사용해 객체 재활용.
예: std::array<T, N>을 기반으로 한 슬랩형 풀에서 Bullet 객체 반복 생성/반납 구현.

- LRU Cache
std::list + std::unordered_map 조합을 통해 캐시와 참조 위치를 동기화.
예: GetResource(id) 시 최근 사용된 리소스를 우선 반환, 오래된 항목 제거 구현.

- STL 컨테이너 선택 전략
데이터 크기, 접근 패턴, 삽입/삭제 비용에 따라 컨테이너 선택 기준 정리.
예: 순차 처리에는 vector, 검색 중심이면 unordered_map 사용 등.

- 우선순위 큐 (std::priority_queue)
시간순 이벤트 처리용 큐 구현.
예: Event{ time, action } 구조에서 time을 기준으로 자동 정렬 처리.

B. 시스템 구성 & 입출력
- 파일 입출력 (istream, ostream)
설정 파일 .ini, .json 등을 파싱해 키-값 쌍 저장 구조 설계.
예: LoadConfig("config.ini") → 내부 맵에 값 로딩.

- JSON 직렬화 & 저장 / 불러오기
nlohmann/json 등 외부 라이브러리를 사용하여 struct ↔ 파일 간 변환.
예: PlayerState를 저장 후 다시 로딩해 재구성하는 기능 구현.

- Logger 시스템 (싱글 / 비동기)
로그 레벨별 메시지 분류 (INFO, ERROR 등), 파일 출력 기능 포함.
예: Log(INFO) << "Player entered zone"와 같이 스트림 연동 구현.

- RAII 기반 리소스 관리
ScopedTimer, ScopedLogger 등을 활용해 특정 영역 종료 시 자동 처리 구현.
예: 함수 시작-끝 사이 시간 측정을 ScopedTimer로 관리.

C. 명령 및 인터프리터 시스템
- Command 패턴 + Undo / Redo
Execute()와 Undo()를 가진 명령 객체를 큐/스택 구조로 관리.
예: MoveUnitCommand 실행 후 Undo()로 이전 위치 복원.

- 스크립트 인터프리터
문자열 파싱기를 통해 명령어를 구문 트리 또는 직접 명령 객체로 변환.
예: "move unit1 3 4" → CommandFactory::CreateMove("unit1", 3, 4)

- 람다와 std::function
콜백 등록, 커맨드 매핑, 시스템 확장에 사용.
예: std::function<void()>을 Command 내부에 저장하여 실행 시 호출.

- DI와 플러그인 구조
인터페이스 기반 시스템 등록/해제 방식.
예: ICommandHandler 인터페이스를 구현한 모듈을 DI 컨테이너에 등록 후 사용.

D. 객체 시스템 및 구조 설계
- 컴포넌트 시스템 (ECS Lite)
EntityID 기반으로 PositionComponent, HealthComponent 등을 독립 관리.
예: System::UpdateMovement()는 Position + Velocity를 가진 Entity만 순회.

- Command / Actor에 Type Erasure 적용
std::function, any, variant 등으로 다양한 타입을 공통 인터페이스로 감싸기.
예: std::function<void()>를 이용한 Actor의 다양한 동작 표현.

- State Machine (상태 기계)
상태 전이 테이블 혹은 enum class + switch 기반 상태 처리 구조.
예: State::Idle → State::Attack 전이 시 조건/애니메이션 설정.

E. 템플릿 & 타입 시스템
- Traits (템플릿 조건 분기)
enable_if, is_pointer, is_same 등을 사용해 컴파일 타임 제약 적용.
예: template<typename T, std::enable_if_t<std::is_pointer_v<T>, int> = 0>

- std::variant + std::visit
런타임 타입 분기를 안전하게 구현.
예: std::variant<Move, Attack, Wait>을 std::visit으로 처리.

- Concepts (C++20)
템플릿 매개변수에 대한 명시적 제약 부여.
예: template<Sortable T> void sort(T& container);

F. 동시성 & 스레딩
- Thread Pool + Atomic
작업 큐 + 워커 스레드 구조, std::atomic을 통한 상태 동기화.
예: Submit(Task)으로 큐에 등록 → 백그라운드에서 병렬 실행 처리.