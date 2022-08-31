void deletionSpecificPosition(Node *&head, int Position)
// {
//   Node *temp = head;
//   if (Position <= lengthCount(head))
//   {
//     if (Position == 1)
//     {
//       deletionAtHead(head);
//     }
//     else if (Position == lengthCount(head))
//     {
//       deletionAtTail(head);
//     }
//     else
//     {
//       int i = 1;
//       while (i < Position - 1)
//       {
//         temp = temp->Next;
//         i++;
//       }
//       Node *delNode = temp->Next;
//       temp->Next = delNode->Next;

//       delete delNode;
//     }
//   }
//   else
//   {

//     cout << "Position is out bound" << endl;
//   }
// }