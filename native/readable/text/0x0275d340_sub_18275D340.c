// sub_275D340
// rva 0x0275d340  size 200  section .text  group text
// window base 0x18275d340: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_275D340(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int16 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v14; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v15; // [rsp+10h] [rbp-18h]
  __int64 v16; // [rsp+18h] [rbp-10h]
  int v17; // [rsp+24h] [rbp-4h]

  v16 = a3;
  v15 = a5;
  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_275D420();
  }
  else
  {
    sub_275A260(a1, a2, a3, a4: (int)a5, a5);
    v9 = v16;
    v10 = *(unsigned __int16 **)(v16 + 8);
    if ( v15 == v5 )
      v11 = *v10;
    else
      v11 = *(unsigned __int16 *)((char *)v10 + (_QWORD)v15);
    if ( (unsigned int)v11 >= 0x80 )
    {
      v12 = *(_QWORD *)(v6 + 40);
      if ( (unsigned __int64)(v12 + 16) > *(_QWORD *)(v6 + 32) )
      {
        v17 = v11;
        v12 = sub_1EAA920(a1: v7, a2: v8, a3: 34307848);
        LOWORD(v11) = v17;
        v9 = v16;
      }
      else
      {
        *(_QWORD *)(v6 + 40) = v12 + 16;
        *(_DWORD *)v12 = 34307848;
        *(_DWORD *)(v12 + 4) = 0;
        *(_QWORD *)(v12 + 8) = 0;
      }
      *(_WORD *)(v12 + 4) = v11;
    }
    else
    {
      v12 = (__int64)&v5[2 * v5[v11 + 94107451]];
    }
    if ( *(int *)(v6 + 16) <= 0 )
      sub_277F280(a1: v7, a2: v8, a3: v9);
    return v12;
  }
}
