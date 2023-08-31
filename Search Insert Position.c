/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search Insert Position.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:50:10 by marvin            #+#    #+#             */
/*   Updated: 2023/08/31 15:50:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int searchInsert(int* nums, int numsSize, int target){
    int index = 0;

    while (index < numsSize)
    {
        if(nums[index] == target)
        {
            return(index);
        }
        else if (nums[index] > target)
        {
            return(index);
        }
        index++;
    }
    return(index);
}