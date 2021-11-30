let element = 5
let l = [2; 4; 6; 4; 6; 3; 7; 4; 8; 4; 2; 5; 6; 7; 8; 3; 6; 9; 4]

l |> List.iter(
    fun ele ->
        if ele = element then
            printfn $"{element} found at {l |> List.findIndex(fun e -> e = ele)}")