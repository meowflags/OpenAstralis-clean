// sub_1ED7C40
// rva 0x01ed7c40  size 218  section .text  group text
// window base 0x181ed7c40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ED7C40(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned __int64 v14; // rsi
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // [rsp+10h] [rbp-28h]
  __int64 v19; // [rsp+18h] [rbp-20h]
  __int64 v20; // [rsp+20h] [rbp-18h]
  __int64 v22; // [rsp+30h] [rbp-8h]

  if ( a6 == 0 )
  {
    v20 = a1;
    v19 = a5;
    sub_28C1C40(a1, a2, a3: v6 + 371535400);
    goto LABEL_9;
  }
  v20 = a1;
  v22 = a6;
  v18 = v6 + 373390488;
  v19 = a5;
  if ( (unsigned int)sub_1ED7D80(a1, a2, a3: v6 + 373390488) != 0 )
  {
    v10 = sub_288A220(a1: v8, a2: v9, a3: v19, a4: v7, a5: v22, a6: 0);
    v14 = a2;
    if ( a2 != v6 )
      return sub_1ED7B80(a1: v13, a2, a3: a2, a4: v12, a5: v19, a6: v10);
LABEL_9:
    sub_276EFE0(a1: v20, a2: v14, a3: v11, a4: v12, a5: v19, a6: v22);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1ED7D20();
  }
  result = sub_2887A40(a1: v8, a2: v9, a3: v18, a4: v7, a5: v19);
  if ( (_DWORD)result != 0 )
    return sub_28869E0(a1: v20, a2: v17, a3: v18, a4: v16, a5: v19, a6: v22);
  return result;
}
