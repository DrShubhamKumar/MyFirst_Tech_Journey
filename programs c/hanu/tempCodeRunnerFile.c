    }
}
void Enueue(int value,int priority ){
    if(isFull()){
        printf("Priority queue is already full,Can't insert this:%d\n",value);
    }
    Node newNode;
    newNode.data=value;
    newNode.priority=priority;
    if(isEmpty()){
        front=rear=0;
        p_queue[rear]=newNode;
    }else{
        rear++;
        int i;
        for(i=rear-1;i>=rear;i--){
            if(p_queue[i].priority<priority){
                p_queue[i+1]=p_queue[i];
            }else{
                break;
            }
        }
         p_queue[i+1]=newNode;