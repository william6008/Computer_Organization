addi x2, x0, 10    # x2 = 10
addi x3, x0, 20    # x3 = 20

# 1. 產生資料 (Producer)
add x1, x2, x3     # x1 = 30，寫入動作將在第 5 拍 (WB) 完成

# 2. 觸發 EX-to-EX Hazard (需要 Forwarding)
# x1 在 EX 階段還沒寫回 RegFile，但下一條指令就要用了
add x4, x1, x0     # 這裡需要 Forwarding (x1 的值來自剛剛那條 add 的結果)

# 3. 觸發 MEM-to-EX Hazard (需要 Forwarding)
# x1 已經推進到 MEM 階段，距離現在的 EX 階段隔了一條指令
add x6, x1, x0     # 這裡也需要 Forwarding (x1 的值來自兩條指令前的 add)