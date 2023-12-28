fn quicksum(packet: &str) -> u32 {
    let mut retval = 0;
    let len = packet.len();
    let bytes = packet.as_bytes();
    if !bytes[0].is_ascii_uppercase() || !bytes[len-1].is_ascii_uppercase() {
        return 0;
    }
    for (i, ch) in packet.bytes().enumerate() {
        if ch.is_ascii_lowercase() {
            return 0;
        } else if ch.is_ascii_uppercase() {
            retval += (i as u32 + 1) * (ch as u32 - 64);
        }
    } 
    return retval;
}

fn main() {
    assert!(quicksum("ACM") == 46);
    assert!(quicksum("MID CENTRAL") == 650);
    assert!(quicksum("BBC") == 15);
    assert!(quicksum("???") == 0);
    assert!(quicksum("axg ") == 0);
    assert!(quicksum("234 234 WEF ASDF AAA 554211 ???? ") == 0);
    assert!(quicksum("A C M") == 75);
    assert!(quicksum("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == 6201);
    assert!(quicksum("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z") == 12051);
    assert!(quicksum("ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ") == 848640);
    assert!(quicksum("Z     A") == 33);
    assert!(quicksum("12312 123 123 asd asd 123 $$$$/()=") == 0);
}
