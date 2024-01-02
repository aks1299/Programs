def remove_adjacent_duplicates(lst):
    if len(lst) < 2:
        return lst

    if lst[0] == lst[1]:
        # Skip the adjacent duplicate
        return remove_adjacent_duplicates(lst[1:])
    else:
        # Keep the current element and process the rest of the list
        return [lst[0]] + remove_adjacent_duplicates(lst[1:])

# Example usage
original_list = [1, 2, 4, 4, 5, 7, 7, 7, 8, 8, 9, 7]
modified_list = remove_adjacent_duplicates(original_list)
print(f"Original List: {original_list}")
print(f"Modified List after removing adjacent duplicates: {modified_list}")
