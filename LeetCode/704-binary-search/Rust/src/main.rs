
fn main() {
    let v1 = vec![1, 2, 3, 4, 5, 6, 7];

    println!("search(v1) = {}", search(v1, 10));
}
pub fn search(nums: Vec<i32>, target: i32) -> i32 {
    let mut left = 0;
    let mut right = nums.len() - 1;
    let mut mid = right / 2;

    while left < right {
        if nums[mid] == target {
            return mid as i32;
        }
        if nums[mid] < target {
            left = mid + 1;
        } else {
            right = mid;
        }
        mid = (right + left) / 2;
    }

    return if nums[mid] == target { mid as i32 } else { -1 };
}
