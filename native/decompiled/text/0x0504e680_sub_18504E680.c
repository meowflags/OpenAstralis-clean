// sub_18504E680
// rva 0x0504e680  size 231  section .text  group text
// window base 0x18504e680: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18504E680(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+8h] [rbp-20h]
  __int64 v20; // [rsp+10h] [rbp-18h]
  __int64 v21; // [rsp+18h] [rbp-10h]
  __int64 v22; // [rsp+20h] [rbp-8h]

  v22 = a3;
  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v6 + 8) )
  {
    v21 = a5;
    MEMORY[0x181EB84E0]();
    MEMORY[0x18277F280](a1: v16, a2: v17, a3: v22, a4: v15, a5: v21);
    return v5;
  }
  else
  {
    v21 = a5;
    v7 = MEMORY[0x185FE1C60](a1, a2, a3: a5);
    v8 = v5 + 8LL * *(unsigned int *)(v22 + 4);
    v20 = v7;
    v19 = v8;
    result = MEMORY[0x184F620E0](a1: v5, a2: v10, a3: v7, a4: v9, a5: 0, a6: v8);
    if ( *(int *)(v6 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v13, a2: v14, a3: v20, a4: v12, a5: v19);
  }
  return result;
}
