// sub_501B9C0
// rva 0x0501b9c0  size 230  section .text  group text
// window base 0x18501b9c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_501B9C0(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  signed int v5; // eax
  signed int v6; // ecx
  __int64 v7; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  _QWORD v11[2]; // [rsp+0h] [rbp-28h] BYREF
  int v12; // [rsp+14h] [rbp-14h]
  unsigned int *v13; // [rsp+18h] [rbp-10h]
  signed int v14; // [rsp+20h] [rbp-8h]
  signed int v15; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)v11 <= *(_QWORD *)(v4 + 8) )
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
    return sub_501BAC0();
  }
  else
  {
    v5 = a3[2];
    v6 = (a3[3] + v5) >> 1;
    if ( v6 > v5 )
    {
      a3[2] = v6;
      v7 = *(_QWORD *)(v4 + 40);
      v9 = a3[1];
      v10 = v7 + 32;
      if ( (unsigned __int64)(v7 + 32) > *(_QWORD *)(v4 + 32) )
      {
        v15 = v6;
        v14 = v5;
        v13 = a3;
        v12 = v9;
        v11[1] = v3 + 8 * v9;
        v7 = sub_1EAA920(a1: v10, a2: v9, a3: 43284472);
        LODWORD(v9) = v12;
        v6 = v15;
        v5 = v14;
        a3 = v13;
      }
      else
      {
        *(_QWORD *)(v4 + 40) = v10;
        *(_DWORD *)v7 = 43284472;
        *(_DWORD *)(v7 + 4) = 0;
        *(_QWORD *)(v7 + 8) = 0;
        *(_QWORD *)(v7 + 16) = 0;
        *(_QWORD *)(v7 + 24) = 0;
      }
      *(_DWORD *)(v7 + 16) = a3[4] | 0x4050;
      *(_DWORD *)(v7 + 12) = v6;
      *(_DWORD *)(v7 + 8) = v5;
      *(_DWORD *)(v7 + 4) = v9;
    }
    else
    {
      v7 = v3;
    }
    if ( *(int *)(v4 + 16) <= 0 )
    {
      v13 = a3;
      sub_277F280();
    }
    return v7;
  }
}
