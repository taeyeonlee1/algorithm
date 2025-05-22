function solution(n, k) {
    var answer = 0;
    let a=0;
    let b=0;
    
    a=n*12000;
    b=(k*2000)-Math.floor(n/10)*2000;
    answer = a+b;
    
    
    return answer;
}