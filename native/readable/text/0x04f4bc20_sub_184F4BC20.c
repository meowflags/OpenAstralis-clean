// sub_4F4BC20
// rva 0x04f4bc20  size 363  section .text  group text
// window base 0x184f4bc20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F4BC20(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rbx
  __int64 v9; // [rsp+0h] [rbp-18h] BYREF
  __int64 v10; // [rsp+8h] [rbp-10h]
  int v11; // [rsp+10h] [rbp-8h]
  int v12; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v4 + 8) )
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
    return sub_4F4BDA0();
  }
  else
  {
    if ( a3 < 256 )
    {
      v5 = *(_QWORD *)(v4 + 40);
      if ( (unsigned __int64)(v5 + 16) > *(_QWORD *)(v4 + 32) )
      {
        v12 = a3;
        v5 = sub_1EAA840(a1, a2, a3: 34082368, a4: v5, a5: 1);
        a3 = v12;
      }
      else
      {
        *(_QWORD *)(v4 + 40) = v5 + 16;
        *(_QWORD *)v5 = 34082368;
        *(_DWORD *)(v5 + 8) = 1;
        *(_DWORD *)(v5 + 12) = 0;
      }
      *(_BYTE *)(v5 + 12) = a3;
      v6 = 0;
    }
    else
    {
      v5 = *(_QWORD *)(v4 + 40);
      if ( (unsigned __int64)(v5 + 16) > *(_QWORD *)(v4 + 32) )
      {
        v12 = a3;
        v5 = sub_1EAA840(a1, a2, a3: 34082368, a4: v5, a5: 2);
        a3 = v12;
      }
      else
      {
        *(_QWORD *)(v4 + 40) = v5 + 16;
        *(_QWORD *)v5 = 34082368;
        *(_DWORD *)(v5 + 8) = 2;
        *(_DWORD *)(v5 + 12) = 0;
      }
      *(_WORD *)(v5 + 12) = a3;
      v6 = 1;
    }
    v7 = *(_QWORD *)(v4 + 40);
    if ( (unsigned __int64)(v7 + 24) > *(_QWORD *)(v4 + 32) )
    {
      v10 = v5;
      v11 = v6;
      v12 = a3;
      v7 = sub_1EAA920(a1, a2, a3: 34082680);
      v5 = v10;
      LOBYTE(v6) = v11;
      a3 = v12;
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v7 + 24;
      *(_DWORD *)v7 = 34082680;
      *(_DWORD *)(v7 + 4) = 0;
      *(_QWORD *)(v7 + 8) = 0;
      *(_QWORD *)(v7 + 16) = 0;
    }
    *(_BYTE *)(v7 + 12) = v6;
    *(_DWORD *)(v7 + 4) = (unsigned __int64)(v5 - v3) >> 3;
    if ( *(int *)(v4 + 16) <= 0 )
    {
      v12 = a3;
      sub_277F280();
    }
    return v7;
  }
}
