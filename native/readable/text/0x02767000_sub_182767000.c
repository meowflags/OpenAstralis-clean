// sub_2767000
// rva 0x02767000  size 299  section .text  group text
// window base 0x182767000: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2767000(__int64 a1, __int64 a2, _DWORD *a3, int a4, int a5, int a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 result; // rax
  _DWORD *v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  int i; // ebx
  __int64 v17; // rdi
  __int64 v18; // rsi
  char v19; // [rsp+0h] [rbp-38h] BYREF
  int v20; // [rsp+14h] [rbp-24h]
  _DWORD *v21; // [rsp+18h] [rbp-20h]
  int v22; // [rsp+24h] [rbp-14h]
  void (__fastcall *v23)(__int64, __int64, _DWORD *); // [rsp+28h] [rbp-10h]
  int v24; // [rsp+30h] [rbp-8h]
  int v25; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v8 + 8) )
  {
    v25 = a5;
    sub_1EB84E0();
    goto LABEL_16;
  }
  v21 = a3;
  if ( a5 != 0 )
  {
    if ( a3 == v7 )
    {
LABEL_17:
      sub_2771080(a1, a2, (_DWORD)a3, a4, a5, a6, a7: v19);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_2767140();
    }
    v25 = a5;
    ((void (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v6 + *(_QWORD *)&v7[2 * (*a3 >> 3) + 126]))(
      a1,
      a2,
      a3,
      a4: a3);
    a3 = v21;
  }
  else
  {
    v25 = 0;
  }
  if ( a3 == v7 )
  {
LABEL_16:
    sub_2771080(a1, a2, (_DWORD)a3, a4, a5, a6, a7: v19);
    goto LABEL_17;
  }
  v9 = *(_QWORD *)&v7[2 * (*a3 >> 3) + 134];
  v20 = *a3 >> 3;
  result = ((__int64 (*)(void))(v6 + v9))();
  v24 = (unsigned __int16)result;
  if ( (_WORD)result != 0 )
  {
    v23 = (void (__fastcall *)(__int64, __int64, _DWORD *))(v6 + *(_QWORD *)&v7[2 * v20 + 126]);
    v23(a1: v12, a2: v13, a3: v21);
    result = sub_27677A0(a1: v14, a2: v15, a3: v21);
    for ( i = 1; ; i = v22 + 1 )
    {
      v11 = v21;
      if ( v24 <= i )
        break;
      v22 = i;
      ((void (__fastcall *)(__int64, _DWORD *))v23)(a1: v12, a2: v21);
      result = sub_27677A0(a1: v17, a2: v18, a3: v21);
    }
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280(a1: v12, a2: v13, a3: v11);
  return result;
}
