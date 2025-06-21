# STL 알고리즘 활용 연습 문제집 (총 50문제)

> 대상: C++11 이상
> 주요 구성: `std::find`, `std::sort`, `std::transform`, `std::accumulate`, `std::set_intersection` 등
> 목적: 반복자 기반 STL 알고리즘의 사용법 및 조합 능력 강화

### Q1. vector에서 특정 값 찾기
- `std::find`를 사용하여 특정 값을 탐색하세요.

### Q2. vector에서 짝수 찾기
- `std::find_if`와 람다를 사용해 짝수를 찾으세요.

### Q3. 모든 요소가 양수인지 확인
- `std::all_of`를 사용해 모든 값이 양수인지 확인해보세요.

### Q4. 하나라도 음수가 있는지 확인
- `std::any_of`로 음수 존재 여부를 검사하세요.

### Q5. 음수가 없는지 확인
- `std::none_of`로 음수 부재 여부를 확인하세요.

### Q6. vector에서 특정 값의 개수 세기
- `std::count` 또는 `std::count_if`를 사용해보세요.

### Q7. 입력값 중 첫 홀수 위치 찾기
- `std::find_if`와 `std::distance`를 조합해보세요.

### Q8. 조건에 맞는 첫 값 제거
- `remove_if` 후 `erase`로 필터링하세요.

### Q9. vector에서 최대/최소값 찾기
- `std::max_element`와 `std::min_element`를 사용하세요.

### Q10. 두 vector가 동일한지 비교
- `std::equal`을 사용해 비교하세요.

### Q11. vector 정렬
- `std::sort`를 사용하여 오름차순 정렬해보세요.

### Q12. 내림차순 정렬
- `std::sort` + `std::greater`를 활용해보세요.

### Q13. 부분 정렬 (앞 K개)
- `std::partial_sort`로 상위 K개만 정렬하세요.

### Q14. 정렬 여부 확인
- `std::is_sorted`를 사용하여 정렬 상태를 확인해보세요.

### Q15. 중복 제거
- `sort` 후 `unique`와 `erase`를 결합해보세요.

### Q16. 중복 포함 여부 확인
- `std::adjacent_find`를 이용해 중복 여부를 확인하세요.

### Q17. 문자열 vector 정렬
- 알파벳 순으로 정렬하거나 길이 기준으로 정렬해보세요.

### Q18. custom comparator로 구조체 정렬
- `lambda` 또는 함수 객체로 정렬 기준을 지정하세요.

### Q19. vector 반전
- `std::reverse`로 순서를 뒤집어보세요.

### Q20. vector 섞기
- `std::shuffle`로 랜덤 셔플을 해보세요.

### Q21. 짝수만 다른 vector로 복사
- `std::copy_if`를 사용해 짝수만 골라 복사하세요.

### Q22. vector를 제곱하여 다른 vector로
- `std::transform`으로 값을 변경하며 복사하세요.

### Q23. 조건에 따라 두 vector 분리
- `std::partition_copy`를 사용하세요.

### Q24. 모든 값을 1 증가시키기
- `std::for_each` 또는 `std::transform`로 변경하세요.

### Q25. 값을 입력받아 누적합 계산
- `std::partial_sum`을 사용해보세요.

### Q26. 모든 값의 합 구하기
- `std::accumulate`로 총합을 구하세요.

### Q27. 내림차순으로 복사
- `std::copy`와 `std::greater`로 내림차순 정렬된 복사본 만들기.

### Q28. 두 vector 요소끼리 더해 새 vector 만들기
- `std::transform`으로 병렬 연산 구현.

### Q29. 이진 검색
- `std::binary_search`로 존재 여부를 확인하세요.

### Q30. lower_bound / upper_bound
- 정렬된 컨테이너에서 경계값 위치를 찾으세요.

### Q31. 두 vector의 교집합 구하기
- `std::set_intersection`을 사용하세요.

### Q32. 합집합 구하기
- `std::set_union`을 활용하세요.

### Q33. 차집합 구하기
- `std::set_difference`를 적용해보세요.

### Q34. 대칭 차집합 구하기
- `std::set_symmetric_difference`를 사용하세요.

### Q35. 부분집합 여부 확인
- `std::includes`를 사용하세요.

### Q36. 정렬된 vector 병합
- `std::merge`를 활용하세요.

### Q37. 정렬된 vector에서 삽입 위치 찾기
- `std::lower_bound` 결과 위치에 insert.

### Q38. 정렬된 두 vector 병합 후 중복 제거
- `merge` + `unique` + `erase` 조합.

### Q39. 정렬된 데이터에서 중복 개수 세기
- `equal_range`로 범위 구해 개수 파악.

### Q40. 비교 함수 기준으로 포함 여부 확인
- `std::includes`에 custom 비교자 사용.

### Q41. 조건에 맞는 순서 유지 필터링
- `std::stable_partition`을 사용해 조건 필터링.

### Q42. 우선순위 정렬 후 일부 추출
- `partial_sort_copy`를 사용해 상위 일부 복사.

### Q43. 원소를 회전
- `std::rotate`로 특정 위치 기준 회전.

### Q44. 다수 원소 교체
- `std::replace` 또는 `std::replace_if`로 일괄 변경.

### Q45. 반복 제거 및 채우기
- `std::unique` + `std::fill` 활용.

### Q46. 삽입 반복자와 함께 transform 사용
- `back_inserter`와 함께 새로운 컨테이너에 저장.

### Q47. 람다로 inline 조건 처리
- `std::find_if`, `count_if` 등에 람다를 적극 사용.

### Q48. 벡터 압축(지우기)
- `erase-remove` 패턴으로 필요 없는 값 삭제.

### Q49. 동일한 길이의 vector 요소 비교
- `std::mismatch`로 다른 위치 찾기.

### Q50. 랜덤 수열 생성
- `iota`와 `shuffle`로 순열 생성.
