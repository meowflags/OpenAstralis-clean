// sub_4F22E00
// rva 0x04f22e00  size 230  section .text  group text
// window base 0x184f22e00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F22E00(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, char *a5, __int64 a6)
{
  char *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  char *v9; // rax
  __int64 result; // rax
  char v11; // [rsp+0h] [rbp-28h] BYREF
  char *v12; // [rsp+8h] [rbp-20h]
  unsigned __int64 v13; // [rsp+10h] [rbp-18h]
  char *v14; // [rsp+18h] [rbp-10h]
  __int64 v15; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v7 + 8) )
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
    return sub_4F22F00();
  }
  else
  {
    if ( a5 == v6 )
    {
      v9 = v6;
      v15 = a6;
      v14 = a5;
      v13 = a3;
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 40);
      if ( (unsigned __int64)(v8 + 32) > *(_QWORD *)(v7 + 32) )
      {
        v15 = a6;
        v14 = a5;
        v13 = a3;
        v8 = sub_1EAA920(a1, a2, a3: 34098720);
        a5 = v14;
      }
      else
      {
        *(_QWORD *)(v7 + 40) = v8 + 32;
        *(_DWORD *)v8 = 34098720;
        *(_DWORD *)(v8 + 4) = 0;
        *(_QWORD *)(v8 + 8) = 0;
        *(_QWORD *)(v8 + 16) = 0;
        *(_QWORD *)(v8 + 24) = 0;
        v15 = a6;
        v13 = a3;
      }
      v14 = a5;
      v12 = (char *)v8;
      sub_4EC23E0(a1, a2, a3: v8);
      v9 = v12;
    }
    v12 = v9;
    result = sub_4F223A0(a1: 0, a2, a3: v13, a4, a5: v9, a6: v15, a7: v11);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
