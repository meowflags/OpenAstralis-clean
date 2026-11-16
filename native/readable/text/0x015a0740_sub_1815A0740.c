// sub_15A0740
// rva 0x015a0740  size 262  section .text  group text
// window base 0x1815a0740: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A0740(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  _DWORD *v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rcx
  _DWORD *v9; // rbp
  __int64 (__fastcall *v10)(__int64, __int64, _DWORD *); // rcx
  unsigned int v11; // eax
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+8h] [rbp-20h]
  _DWORD *v15; // [rsp+10h] [rbp-18h]
  _DWORD *v16; // [rsp+18h] [rbp-10h]
  int v17; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v5 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_15A0860();
  }
  else
  {
    v6 = *(unsigned int *)(a3 + 4);
    if ( (_DWORD)v6 == 47076751 )
      v7 = v4;
    else
      v7 = &v4[2 * v6];
    if ( v7 == v4 )
    {
      v17 = 0;
    }
    else if ( *(_DWORD *)((char *)v7 + (int)v4[2 * (*v7 >> 3) + 13]) != 0 )
    {
      v17 = *(_DWORD *)((char *)v7 + (int)v4[2 * (*v7 >> 3) + 13]);
    }
    else
    {
      v16 = v7;
      v15 = &v4[2 * v6];
      v14 = a3;
      v17 = sub_1ED7320(a1, a2, a3: v7);
      v7 = v16;
      a3 = v14;
    }
    v8 = *(unsigned int *)(a3 + 20);
    v9 = &v4[2 * v8];
    if ( (_DWORD)v8 != 0 )
    {
      v16 = v7;
      v14 = a3;
      v10 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v3 + *(_QWORD *)&v4[2 * (v4[2 * v8] >> 3) + 24]);
      v15 = v9;
      v11 = v10(a1, a2, a3: v9);
    }
    else
    {
      v11 = 0;
      v15 = &v4[2 * v8];
      v16 = v7;
      v14 = a3;
    }
    if ( *(int *)(v5 + 16) <= 0 )
      v11 = sub_277F280();
    return v17 ^ v11;
  }
}
