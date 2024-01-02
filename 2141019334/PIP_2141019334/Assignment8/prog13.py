def insert_at_k_positions(lst, x, k, current_position=0):
    if not lst:
        return []
    
    if current_position % k == 0 and current_position != 0:
        return [x] + insert_at_k_positions(lst, x, k, current_position + 1)
    else:
        return [lst[0]] + insert_at_k_positions(lst[1:], x, k, current_position + 1)

# Example usage
original_list = [1, 2, 3, 4, 5, 6, 7]
element_to_insert = 50
k = 3
modified_list = insert_at_k_positions(original_list, element_to_insert, k)
print(f"Original List: {original_list}")
print(f"Modified List after inserting {element_to_insert} at every {k}-th position: {modified_list}")
