// sub_1EBF420
// rva 0x01ebf420  size 341  section .text  group text
// window base 0x181ebf420: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EBF420(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rbp
  char v13; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v14; // [rsp+8h] [rbp-20h]
  _DWORD *v15; // [rsp+10h] [rbp-18h]
  __int64 v16; // [rsp+18h] [rbp-10h]
  _DWORD *v17; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, (__int64)a5, a6, a7: v13);
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
    return sub_1EBF580();
  }
  else if ( a5 == (_DWORD *)a3 )
  {
    if ( *(int *)(v7 + 16) <= 0 )
    {
      v17 = a5;
      v16 = a3;
      sub_277F280();
    }
    return 1;
  }
  else if ( a5 == v6 || (v8 = *a5 >> 3, SHIWORD(v6[2 * v8 + 15]) < 3) || v6[2 * v6[2 * v8 + 4] + 5] != 19741 )
  {
    v17 = a5;
    v16 = a3;
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280();
    return 0;
  }
  else if ( *(_DWORD *)(a3 + 12) == a5[3] )
  {
    v10 = (unsigned int)a5[1];
    v11 = *(unsigned int *)(a3 + 4);
    v12 = &v6[2 * v10];
    if ( (_DWORD)v11 == (_DWORD)v10 )
    {
      result = 1;
      v15 = v12;
      v14 = &v6[2 * v11];
      v17 = a5;
      v16 = a3;
    }
    else if ( (_DWORD)v11 != 0 )
    {
      v17 = a5;
      v16 = a3;
      v14 = &v6[2 * v11];
      v15 = &v6[2 * v10];
      result = sub_57B6E40(a1, a2, a3: v14, a4: v11, a5: v15);
    }
    else
    {
      result = 0;
      v15 = v12;
      v14 = &v6[2 * v11];
      v17 = a5;
      v16 = a3;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  else
  {
    if ( *(int *)(v7 + 16) <= 0 )
    {
      v17 = a5;
      v16 = a3;
      sub_277F280();
    }
    return 0;
  }
  return result;
}
