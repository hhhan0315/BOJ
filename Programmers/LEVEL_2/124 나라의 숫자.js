function solution(n) {
  var answer = "";

  while (n > 0) {
    if (n % 3 == 0) {
      answer = "4" + answer;
      n = Math.floor(n / 3 - 1);
    } else if (n % 3 == 1) {
      answer = "1" + answer;
      n = Math.floor(n / 3);
    } else if (n % 3 == 2) {
      answer = "2" + answer;
      n = Math.floor(n / 3);
    }
  }

  return answer;
}
// 규칙을 더 잘 찾도록 해보자.
