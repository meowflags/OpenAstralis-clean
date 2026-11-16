// sub_504A640
// rva 0x0504a640  size 200  section .text  group text
// window base 0x18504a640: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504A640(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  unsigned int v7; // eax
  int v8; // ecx
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v11; // [rsp+10h] [rbp-18h]
  _DWORD *v12; // [rsp+18h] [rbp-10h]
  unsigned int v13; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v6 + 8) )
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
    return sub_504A720();
  }
  else
  {
    if ( a3 == v5 )
    {
      v7 = 0;
    }
    else
    {
      v7 = *(_DWORD *)((char *)a3 + (int)v5[2 * (*a3 >> 3) + 13]);
      if ( v7 == 0 )
      {
        v12 = a5;
        v11 = a3;
        v7 = sub_1ED7320();
        a5 = v12;
        a3 = v11;
      }
    }
    if ( a5 == v5 )
    {
      v8 = 0;
    }
    else
    {
      v8 = *(_DWORD *)((char *)a5 + (int)v5[2 * (*a5 >> 3) + 13]);
      if ( v8 == 0 )
      {
        v13 = v7;
        v12 = a5;
        v11 = a3;
        v8 = sub_1ED7320(a1, a2, a3: a5);
        v7 = v13;
        a5 = v12;
        a3 = v11;
      }
    }
    if ( *(int *)(v6 + 16) <= 0 )
    {
      v13 = v7;
      v12 = a5;
      v11 = a3;
      v7 = sub_277F280();
    }
    return v8 ^ v7;
  }
}
