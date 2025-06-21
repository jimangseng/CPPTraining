# STL 시퀀스 컨테이너 연습 문제집 (총 60문제)

> 대상: C++11 이상
> 주요 컨테이너: `vector`, `deque`, `list`, `array`, `forward_list`
> 목적: STL 컨테이너/반복자/알고리즘을 단계적으로 익히기

### Q1. 정수 입력 받아 vector에 저장하고 출력
- 사용자로부터 여러 정수를 입력받아 vector에 저장하고, 순차적으로 출력해보세요.

### Q2. vector에 값 삽입/삭제/조회 연습
- vector에 값을 추가하고 삭제하며, 인덱스를 이용해 값을 조회하는 기초 연습입니다.

### Q3. deque 앞뒤 삽입과 삭제 연습
- deque의 push_front, push_back, pop_front, pop_back을 이용해 앞뒤 조작을 연습해보세요.

### Q4. list에 값 삽입하고 양방향 순회
- list에 값을 추가하고, 양방향 반복자를 이용해 앞뒤로 순회해보세요.

### Q5. forward_list에 insert_after로 값 삽입
- forward_list는 단방향 반복자만 제공하므로 insert_after를 사용해 값을 삽입하세요.

### Q6. array를 초기화하고 전체 합 계산
- std::array를 초기화한 후, 모든 원소의 합을 구해보세요.

### Q7. vector의 최대값과 그 위치 찾기
- std::max_element를 사용해 최대값과 그 위치를 출력해보세요.

### Q8. list를 오름차순 정렬하고 출력
- list의 sort()를 이용해 정렬하고 모든 원소를 출력해보세요.

### Q9. forward_list를 정렬하고 역순 출력
- forward_list를 정렬하고, 역순 출력은 stack 등을 이용해 구현해보세요.

### Q10. deque로 명령 큐 시뮬레이션 (push, pop)
- 명령어를 입력받아 deque에 push, pop 명령을 실행하는 시뮬레이터를 구현해보세요.

### Q11. array와 vector 간 복사 및 출력
- array의 값을 vector로 복사하고 출력해보세요.

### Q12. vector를 초기화하고 인덱스 삭제
- vector에서 지정된 인덱스의 요소를 삭제하는 기능을 구현해보세요.

### Q13. deque에서 앞뒤 삭제 반복 시뮬레이션
- deque에 여러 값을 넣고, 앞뒤에서 번갈아 pop해보세요.

### Q14. list에서 특정 값 제거 (remove)
- list에서 특정 값을 찾아 remove 함수를 사용해 제거해보세요.

### Q15. forward_list 순회하면서 조건 출력
- 조건에 맞는 요소만 출력하면서 forward_list를 순회해보세요.

### Q16. vector의 짝수만 골라 출력
- vector에서 짝수만 필터링하여 출력해보세요.

### Q17. vector 요소 모두 제곱 후 덮어쓰기
- 모든 요소를 제곱한 뒤 원래 vector에 덮어쓰세요.

### Q18. vector를 역순으로 복사하여 list에 저장
- vector의 값을 역순으로 list에 복사해보세요.

### Q19. list의 짝수 요소 제거 (remove_if)
- list에서 짝수 값을 모두 제거하세요.

### Q20. vector에서 중복 제거 (sort, unique, erase)
- 정렬 후 unique + erase를 사용해 중복을 제거해보세요.

### Q21. deque 내 문자열 정렬 (vector로 복사 후)
- deque의 문자열을 vector로 옮긴 뒤 정렬하세요.

### Q22. forward_list 내 최솟값 찾기
- std::min_element를 사용해 최소값을 찾아보세요.

### Q23. list를 reverse() 함수 없이 뒤집기
- list를 수동으로 역순 정렬하거나 reverse_iterator로 뒤집어보세요.

### Q24. vector에서 특정 값 개수 세기
- count 함수를 사용해 특정 값이 몇 번 나오는지 세어보세요.

### Q25. array 중 짝수만 vector로 복사 (copy_if)
- copy_if 알고리즘으로 짝수만 vector에 복사해보세요.

### Q26. list에서 문자열 길이 기준 정렬
- 문자열의 길이를 기준으로 정렬해보세요 (custom comparator).

### Q27. vector에서 홀수 제거 (erase-remove idiom)
- erase-remove 패턴을 사용해 홀수를 제거하세요.

### Q28. list 요소들을 모두 반으로 줄이기 (transform)
- transform을 사용해 list의 각 요소를 2로 나누어 갱신해보세요.

### Q29. deque에서 소수만 필터링
- 소수 판별 함수를 만들어 deque에서 소수만 출력해보세요.

### Q30. forward_list 중복 제거 (sort + unique)
- 정렬 후 unique를 사용해 중복을 제거해보세요.

### Q31. 두 개의 vector를 하나로 병합
- 두 vector를 이어붙여 하나로 만드는 연습입니다.

### Q32. list와 deque 간 요소 복사
- list의 내용을 deque로 복사하거나 반대로도 연습해보세요.

### Q33. array 두 개 병합 후 vector로 변환
- 두 개의 array를 합쳐 vector로 만들고 출력해보세요.

### Q34. forward_list 정렬 후 vector로 변환
- forward_list를 정렬하고 vector로 복사해보세요.

### Q35. vector를 배열에 복사 (copy_n)
- vector의 내용을 array에 복사해보세요.

### Q36. vector를 내림차순 정렬
- std::sort와 std::greater를 사용해 내림차순 정렬하세요.

### Q37. list 중복 제거 (sort, unique)
- list를 정렬한 뒤 unique로 중복 제거를 연습하세요.

### Q38. deque에 있는 문자들을 대문자로 변환
- transform과 toupper를 사용해 대문자화하세요.

### Q39. array를 역순 정렬 (greater)
- greater를 사용해 array를 역순 정렬해보세요.

### Q40. vector를 짝수/홀수로 나눠 각각 복사
- partition_copy 등을 사용해 짝수/홀수를 나눠보세요.

### Q41. vector 요소를 map 키로 사용해 변환
- vector를 순회하며 map의 키로 삽입해보세요.

### Q42. list 중 중복 문자열 제거 후 정렬
- 중복 문자열을 제거하고 정렬해보세요.

### Q43. vector에서 특정 범위 삭제 (erase)
- 지정된 범위를 삭제하는 erase(begin()+i, ...) 구현.

### Q44. deque 내 문자열 길이에 따라 정렬
- 길이에 따라 문자열을 정렬해보세요 (lambda).

### Q45. list 중 홀수 번째 원소만 남기기
- 인덱스를 이용해 홀수 위치만 남기세요.

### Q46. deque를 사용한 슬라이딩 윈도우 합 계산
- 지정된 크기만큼의 합을 구하는 슬라이딩 윈도우를 deque로 구현하세요.

### Q47. list 기반 Undo/Redo 시스템 구현
- list를 사용해 명령 기록과 Undo/Redo를 구현해보세요.

### Q48. vector를 이용한 최근 N개 로그 저장 구조
- push_back과 erase를 사용해 로그 저장 구조를 만들어요.

### Q49. deque로 키 입력 이력 버퍼 만들기
- 입력값을 순차적으로 저장하고 오래된 값을 제거하는 구조 구현.

### Q50. forward_list를 이용한 간단 명령어 파서
- 단방향으로 명령어를 삽입/삭제하며 동작을 시뮬레이션.

### Q51. vector 내 값으로 순열 생성 (next_permutation)
- vector를 이용해 가능한 순열을 만들어보세요.

### Q52. list 중 K번째 요소 삭제 시뮬레이션
- iterator를 사용해 K번째 위치 요소를 삭제하세요.

### Q53. deque를 fixed-size queue처럼 사용
- 용량이 정해진 큐처럼 동작하게 deque를 제어하세요.

### Q54. array의 원소를 랜덤 셔플 (random_shuffle)
- 랜덤으로 섞기 위해 shuffle 함수를 사용하세요.

### Q55. forward_list 내 값들을 거꾸로 연결한 list 만들기
- forward_list를 역순으로 list에 복사하세요.

### Q56. vector에 reserve를 사용해 capacity 추적
- vector의 용량 변화를 관찰하고 reserve를 적용해보세요.

### Q57. list에 iterator로 특정 위치 삽입
- iterator를 사용해 원하는 위치에 값을 삽입해보세요.

### Q58. vector의 특정 범위만 정렬 (partial_sort)
- 앞에서 K개만 정렬하도록 구현해보세요.

### Q59. forward_list에서 값마다 iterator 이동 삽입
- 조건에 따라 반복자를 이동하며 삽입 연산 구현.

### Q60. vector에서 모든 값에 대해 사용자 정의 연산 적용
- transform과 람다식을 사용해 연산을 적용하세요.
