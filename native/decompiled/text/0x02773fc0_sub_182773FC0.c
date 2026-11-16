// sub_182773FC0
// rva 0x02773fc0  size 176  section .text  group text
// window base 0x182773fc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182773FC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  char v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+8h] [rbp-20h]
  __int64 v20; // [rsp+10h] [rbp-18h]
  __int64 v21; // [rsp+18h] [rbp-10h]
  __int64 v22; // [rsp+20h] [rbp-8h]

  v20 = a1;
  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    v21 = a6;
    v22 = a5;
    v19 = a3;
    MEMORY[0x181EB83C0]();
    goto LABEL_7;
  }
  v19 = a3;
  v22 = a5;
  v21 = a6;
  sub_1827737C0(a1: a6, a2: -1, a3, a4: v22, a5: a1, a6: v22);
  v10 = v20;
  if ( v20 == v6 )
  {
LABEL_7:
    sub_18276EFE0(a1: v10, a2: v9, a3: v19, a4: v8, a5: v22, a6: v21, a7: v18);
    JUMPOUT(0x182774070LL);
  }
  v11 = MEMORY[0x182084840](a1: v20, a2: v9, a3: v6 + 376612120, a4: v8, a5: v6 + 373049840);
  MEMORY[0x1820841E0](a1: v12, a2: v13, a3: v11);
  if ( *(int *)(v7 + 16) <= 0 )
    sub_18277F280(a1: v15, a2: v16, a3: v14);
  return 0;
}
