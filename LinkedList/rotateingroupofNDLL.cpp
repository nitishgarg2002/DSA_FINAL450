void push(Node** head_ref, Node* new_node)
{
    new_node->prev = NULL;
    new_node->next = (*head_ref);
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
    (*head_ref) = new_node;
}
Node* revListInGroupOfGivenSize(Node* head, int k)
{
    Node *current = head;
    Node* next = NULL;
    Node* newHead = NULL;
    int count = 0;
    while (current != NULL && count < k)
    {
        next = current->next;
        push(&newHead, current);
        current = next;
        count++;
    }
    if (next != NULL)
    {
        head->next = revListInGroupOfGivenSize(next, k);
        head->next->prev = head;
    }

    return newHead;
}