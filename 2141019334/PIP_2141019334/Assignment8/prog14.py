def delete_every_kth_element(lst, k, current_position=1):
    if not lst:
        return []

    if current_position % k == 0:
        return delete_every_kth_element(lst[1:], k, current_position + 1)
    else:
        return [lst[0]] + delete_every_kth_element(lst[1:], k, current_position + 1)

# Example usage
original_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]
k = 3
modified_list = delete_every_kth_element(original_list, k)
print(f"Original List: {original_list}")
print(f"Modified List after deleting every {k}-th element: {modified_list}")
