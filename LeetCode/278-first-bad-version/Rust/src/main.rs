fn main() {
    println!("Hello, world!");
}

// The API isBadVersion is defined for you.
// isBadVersion(version:i32)-> bool;
// to call it use self.isBadVersion(version)

/*
THIS IS THE SOLUTION:
- Note on how 'mid' is computed: `low + (high - low) / 2` instead of `(low + high) / 2`
- This is because an overflow happens with a specific test case

impl Solution {
    pub fn first_bad_version(&self, n: i32) -> i32 {
        let mut high: i32 = n;
        let mut low: i32 = 0;
        let mut mid: i32 = 0;

        while low <= high {
            mid = low + (high - low) / 2;
            if self.isBadVersion(mid) { 
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        high + 1
    }
}
*/
