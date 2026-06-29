```mermaid
flowchart TD
Start([Start]) --> D[/รับ N/]
D --> Input[i = 1]
--> D1{i <= N?}
D1 -->|No| End([End])
D1 -->|Yes| input[/พิมพ์ i/]
--> d2[i = i+1]
--> D1{i <= N?}
```
