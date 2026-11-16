// sub_4F4BA80
// rva 0x04f4ba80  size 390  section .text  group text
// window base 0x184f4ba80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F4BA80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  unsigned __int16 v5; // ax
  __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  __int64 v10; // [rsp+0h] [rbp-28h] BYREF
  __int64 v11; // [rsp+10h] [rbp-18h]
  __int64 v12; // [rsp+18h] [rbp-10h]
  int v13; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v4 + 8) )
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
    return sub_4F4BC20();
  }
  else
  {
    v5 = *(_WORD *)(a3 + 4);
    if ( v5 < 0x100u )
    {
      v6 = *(_QWORD *)(v4 + 40);
      if ( (unsigned __int64)(v6 + 16) > *(_QWORD *)(v4 + 32) )
      {
        v13 = *(__int16 *)(a3 + 4);
        v12 = a3;
        v6 = sub_1EAA840(a1, a2, a3: 34082368, a4: 34082368, a5: 1);
        LOBYTE(v5) = v13;
        a3 = v12;
      }
      else
      {
        *(_QWORD *)(v4 + 40) = v6 + 16;
        *(_QWORD *)v6 = 34082368;
        *(_DWORD *)(v6 + 8) = 1;
        *(_DWORD *)(v6 + 12) = 0;
      }
      *(_BYTE *)(v6 + 12) = v5;
      v7 = 0;
    }
    else
    {
      v6 = *(_QWORD *)(v4 + 40);
      if ( (unsigned __int64)(v6 + 16) > *(_QWORD *)(v4 + 32) )
      {
        v13 = *(__int16 *)(a3 + 4);
        v12 = a3;
        v6 = sub_1EAA840(a1, a2, a3: 34082368, a4: 34082368, a5: 2);
        v5 = v13;
        a3 = v12;
      }
      else
      {
        *(_QWORD *)(v4 + 40) = v6 + 16;
        *(_QWORD *)v6 = 34082368;
        *(_DWORD *)(v6 + 8) = 2;
        *(_DWORD *)(v6 + 12) = 0;
      }
      *(_WORD *)(v6 + 12) = v5;
      v7 = 1;
    }
    v8 = *(_QWORD *)(v4 + 40);
    if ( (unsigned __int64)(v8 + 24) > *(_QWORD *)(v4 + 32) )
    {
      v11 = v6;
      v13 = v7;
      v12 = a3;
      v8 = sub_1EAA920(a1, a2, a3: 34082680);
      v6 = v11;
      LOBYTE(v7) = v13;
      a3 = v12;
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v8 + 24;
      *(_DWORD *)v8 = 34082680;
      *(_DWORD *)(v8 + 4) = 0;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = 0;
    }
    *(_BYTE *)(v8 + 12) = v7;
    *(_DWORD *)(v8 + 4) = (unsigned __int64)(v6 - v3) >> 3;
    if ( *(int *)(v4 + 16) <= 0 )
    {
      v12 = a3;
      sub_277F280();
    }
    return v8;
  }
}
