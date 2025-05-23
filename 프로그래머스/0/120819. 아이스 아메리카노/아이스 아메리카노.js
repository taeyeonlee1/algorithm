function solution(money) {
    var answer = [];
    let d;
    let m;
    
    m = Math.floor(money/5500);
    d = money - 5500*m;
    
    answer.push(m, d);
    
    
    
    
    return answer;
}