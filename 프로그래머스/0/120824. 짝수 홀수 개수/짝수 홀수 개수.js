function solution(num_list) {
    var answer = [];
    let odd = [];
    let even = []; 
    
    even = num_list.filter(i=>i%2==0);
    answer.push(even.length);
    
    odd = num_list.filter(i=>i%2!=0);
    answer.push(odd.length);
    
    return answer;
}