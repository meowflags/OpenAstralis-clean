// sub_181596900
// rva 0x01596900  size 160  section .text  group text
// window base 0x181596900: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181596900(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v15; // [rsp+0h] [rbp-28h] BYREF
  __int64 v16; // [rsp+8h] [rbp-20h]
  __int64 v17; // [rsp+10h] [rbp-18h]
  __int64 v18; // [rsp+18h] [rbp-10h]
  __int64 v19; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_7;
  }
  v19 = a5;
  if ( a5 == v5 )
  {
LABEL_7:
    MEMORY[0x182771080]();
    return sub_1815969A0();
  }
  v7 = v5 + 8LL * *(unsigned int *)(a5 + 16);
  v18 = v5 + 8LL * *(unsigned int *)(a5 + 8);
  v8 = sub_181596840(a1, a2, a3: v7);
  v9 = v5 + 8LL * *(unsigned int *)(v19 + 16);
  v17 = v8;
  v16 = v9;
  v11 = MEMORY[0x1828BEA20](a1: v9, a2: v10, a3: v5 + 376612904, a4: v9, a5: v18, a6: v8);
  if ( *(int *)(v6 + 16) <= 0 )
    v11 = MEMORY[0x18277F280](a1: v12, a2: v13, a3: v16, a4: v17);
  return v11 != v5;
}
