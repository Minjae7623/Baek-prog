# [level 1] 부족한 금액 계산하기 - 82612 

[문제 링크](https://school.programmers.co.kr/learn/courses/30/lessons/82612?language=cpp) 

### 성능 요약

메모리: 4.21 MB, 시간: 0.01 ms

### 구분

코딩테스트 연습 > 위클리 챌린지

### 채점결과

정확성: 100.0<br/>합계: 100.0 / 100.0

### 제출 일자

2025년 07월 08일 12:40:57

### 문제 설명

<p>새로 생긴 놀이기구는 인기가 매우 많아 줄이 끊이질 않습니다. 이 놀이기구의 원래 이용료는 price원 인데, 놀이기구를 N 번 째 이용한다면 원래 이용료의 N배를 받기로 하였습니다. 즉, 처음 이용료가 100이었다면 2번째에는 200, 3번째에는 300으로 요금이 인상됩니다.<br>
놀이기구를 count번 타게 되면 현재 자신이 가지고 있는 금액에서 얼마가 모자라는지를 return 하도록 solution 함수를 완성하세요.<br>
단, 금액이 부족하지 않으면 0을 return 하세요.</p>

<h5>제한사항</h5>

<ul>
<li>놀이기구의 이용료 price : 1 ≤ price ≤ 2,500, price는 자연수</li>
<li>처음 가지고 있던 금액 money : 1 ≤ money ≤ 1,000,000,000, money는 자연수</li>
<li>놀이기구의 이용 횟수 count : 1 ≤ count ≤ 2,500, count는 자연수</li>
</ul>

<hr>

<h5>입출력 예</h5>
<table class="table">
        <thead><tr>
<th>price</th>
<th>money</th>
<th>count</th>
<th>result</th>
</tr>
</thead>
        <tbody><tr>
<td>3</td>
<td>20</td>
<td>4</td>
<td>10</td>
</tr>
</tbody>
      </table>
<h5>입출력 예 설명</h5>

<p>입출력 예 #1<br>
이용금액이 3인 놀이기구를 4번 타고 싶은 고객이 현재 가진 금액이 20이라면, 총 필요한 놀이기구의 이용 금액은 30 <strong>(= 3+6+9+12)</strong> 이 되어 10만큼 부족하므로 10을 return 합니다.</p>

<h3>참고 사항</h3>

<ul>
<li>미션 언어는 Java, JavaScript, Python3, C++ 만 해당 됩니다.</li>
<li>같은 코드를 제출한 사람이 여럿이라면 코드를 가장 먼저 제출한 분께 상품을 드립니다.</li>
<li>좋아요 수가 동일할 경우 코드를 가장 먼저 제출한 분께 상품을 드립니다.</li>
</ul>


> 출처: 프로그래머스 코딩 테스트 연습, https://school.programmers.co.kr/learn/challenges