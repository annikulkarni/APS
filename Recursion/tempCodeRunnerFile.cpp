while(final!=NULL)
        {
            Node *next = final->next;
            final->next = dummy3;
            dummy3 = final;
            final = next;
        }
        