| Function                  | What to Learn            | Practice Ideas                    |
| ------------------------- | ------------------------ | --------------------------------- |
| `ft_strlen`               | count chars until `'\0'` | print i and s[i] step-by-step     |
| `ft_memset`, `ft_bzero`   | manipulate bytes         | test with arrays of `int`, `char` |
| `ft_memcpy`, `ft_memmove` | how memory overlap works | draw a memory table for src/dst   |
| `ft_strdup`               | malloc + copy string     | free it and check leaks           |


| Function                   | New Concept          | Mini Goal                                   |
| -------------------------- | -------------------- | ------------------------------------------- |
| `ft_atoi`                  | numeric conversion   | make table for each digit (like you did 👑) |
| `ft_strchr` / `ft_strrchr` | pointer return       | draw index search visually                  |
| `ft_strncmp`, `ft_memcmp`  | byte-by-byte compare | print i, s1[i], s2[i] in each step          |
| `ft_strnstr`               | substring search     | debug with “HelloWorld” & “World”           |



📆 Phase 3: Dynamic Memory Thinking (malloc + calculation)
🕐 5 to 7 days
Focus: how to decide malloc size, and how to handle partial strings.

| Function     | Concept             | What to Master                   |
| ------------ | ------------------- | -------------------------------- |
| `ft_substr`  | substring logic     | when to stop copying             |
| `ft_strjoin` | joining strings     | malloc total len + 1             |
| `ft_strtrim` | skip unwanted chars | practice indexes from both sides |
| `ft_split`   | hardest of all 🧠   | how to count words before malloc |

💡 Tip: before coding, draw: what input, what output, what middle steps.


📆 Phase 4: Testing & Debugging Mindset
🕐 always ongoing
Focus: stop thinking “is this right?” and start thinking “let me check.”

| Tool           | Use                                       |
| -------------- | ----------------------------------------- |
| `valgrind`     | detect leaks after each malloc            |
| `printf()`     | debug steps                               |
| “tables”       | visualize flow (as you did for `ft_atoi`) |
| small `main()` | test each function individually           |
