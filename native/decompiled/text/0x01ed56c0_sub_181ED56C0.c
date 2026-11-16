// sub_181ED56C0
// rva 0x01ed56c0  size 191  section .text  group text
// window base 0x181ed56c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_181ED56C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r9
  _DWORD *result; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // [rsp+0h] [rbp-28h] BYREF
  __int64 v26; // [rsp+8h] [rbp-20h]
  __int64 v27; // [rsp+10h] [rbp-18h]
  __int64 v28; // [rsp+18h] [rbp-10h]
  __int64 v29; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v7 + 8) )
  {
    v27 = a6;
    v29 = a5;
    v28 = a3;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v25);
    goto LABEL_11;
  }
  v29 = a5;
  v28 = a3;
  v27 = a6;
  v8 = MEMORY[0x1827CE160](a1, a2, a3: v6 + 376659688, a4, a5: a6, a6: 0);
  if ( v8 != v6 )
  {
    v26 = v8;
    v13 = sub_181ED45C0(a1: v10, a2: v11, a3: v28, a4: v9, a5: v29, a6: v12, a7: v25);
    if ( v13 != v6 )
    {
      result = sub_181ECE500(a1: v15, a2: v16, a3: v13, a4: v14, a5: v26, a6: v17, a7: v25);
      if ( *(int *)(v7 + 16) <= 0 )
        return (_DWORD *)MEMORY[0x18277F280]();
      return result;
    }
LABEL_11:
    MEMORY[0x182771080](a1: v15, a2: v16, a3: v28, a4: v14, a5: v29, a6: v27);
    __builtin_debugtrap();
    return (_DWORD *)sub_181ED5780(a1: v21, a2: v22, a3: v19, a4: v20, a5: v23, a6: v24);
  }
  if ( *(int *)(v7 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return (_DWORD *)v6;
}
