function solution(num_list) {
    var answer = 0;
    let sum=1;
    
    if(num_list.length <=10){
        sum=1;
        for(let i=0;i<num_list.length;i++){
            sum*=num_list[i];
        }
    }
    else{
        sum=0;
        for(let i=0;i<num_list.length;i++){
            sum+=num_list[i];
        }
    }
    
    return sum;
}