// sub_1EA3EA0
// rva 0x01ea3ea0  size 255  section .text  group text
// window base 0x181ea3ea0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EA3EA0(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 i; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  char v19; // [rsp+0h] [rbp-28h] BYREF
  __int64 v20; // [rsp+8h] [rbp-20h]
  __int64 v21; // [rsp+10h] [rbp-18h]
  __int64 v22; // [rsp+18h] [rbp-10h]
  __int64 v23; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v19);
    __builtin_debugtrap();
    return sub_1EA3FA0(a1: v15, a2: v16, a3: v13, a4: v14, a5: v17, a6: v18);
  }
  v23 = a5;
  v8 = *(_QWORD *)(v6 + 376178832);
  if ( v8 == 0 )
    goto LABEL_3;
  v20 = v6 + 376612120;
  v22 = v8;
  if ( (unsigned int)sub_1EA3FA0(a1, a2, a3: v6 + 376612120, a4: v6 + 376612120, a5, a6: v8) == 0 )
  {
    for ( i = *(_QWORD *)(v22 + 256); i != 0; i = *(_QWORD *)(v21 + 256) )
    {
      v21 = i;
      if ( (unsigned int)sub_1EA3FA0(a1: v10, a2: v11, a3: v20, a4: v20, a5: v23, a6: i) != 0 )
        goto LABEL_7;
    }
LABEL_3:
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280();
    return 0;
  }
LABEL_7:
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280();
  return 1;
}
