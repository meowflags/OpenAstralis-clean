// sub_184F1D340
// rva 0x04f1d340  size 555  section .text  group text
// window base 0x184f1d340: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F1D340(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char *v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 result; // rax
  char *v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  char v21; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+10h] [rbp-28h]
  __int64 v23; // [rsp+18h] [rbp-20h]
  char *v24; // [rsp+20h] [rbp-18h]
  __int64 v25; // [rsp+28h] [rbp-10h]
  int v26; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_184F1D580();
  }
  else
  {
    v25 = a3;
    v24 = (char *)a5;
    v26 = a6;
    v8 = *(_QWORD *)(v7 + 40);
    v9 = v8 + 24;
    if ( v8 + 24 > *(_QWORD *)(v7 + 32) )
    {
      v23 = a1;
      v8 = MEMORY[0x181EAA920](a1, a2, a3: 34241520);
      a1 = v23;
      a5 = (__int64)v24;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v9;
      *(_DWORD *)v8 = 34241520;
      *(_DWORD *)(v8 + 4) = 0;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = 0;
    }
    v23 = a1;
    v22 = v8;
    sub_184F18980(a1, a2, a3: v8, a4: v9, a5, a6: a1, a7: v21);
    v12 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v12 + 40) > *(_QWORD *)(v7 + 32) )
    {
      v12 = MEMORY[0x181EAA920](a1: v10, a2: v11, a3: 34241872);
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v12 + 40;
      *(_DWORD *)v12 = 34241872;
      *(_DWORD *)(v12 + 4) = 0;
      *(_QWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 16) = 0;
      *(_QWORD *)(v12 + 24) = 0;
      *(_QWORD *)(v12 + 32) = 0;
    }
    v13 = v22;
    v22 = v12;
    MEMORY[0x184EB4E20](a1: v10, a2: v11, a3: v12, a4: v12, a5: v13);
    v14 = (v22 - (unsigned __int64)v6) >> 3;
    result = v25;
    *(_DWORD *)(v25 + 8) = v14;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v18 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v18) >> 9) + 0x38) != 0 )
        *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v18) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(result + 20) = 0;
    *(_DWORD *)(result + 12) = v14;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v19 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v19) >> 9) + 0x38) != 0 )
        *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v19) >> 9) + 0x38) = 0;
    }
    v16 = v24;
    *(_BYTE *)(result + 24) = MEMORY[0xEA6E110] & v26;
    if ( v16 != v6 )
    {
      v17 = *(_DWORD *)v16 >> 3;
      if ( *(__int16 *)&v6[8 * v17 + 62] >= 4 && *(_DWORD *)&v6[8 * *(unsigned int *)&v6[8 * v17 + 16] + 24] == 87998 )
      {
        *(_DWORD *)(result + 20) = (unsigned __int64)(v16 - v6) >> 3;
        if ( (*(_DWORD *)result & 2) != 0 )
        {
          v20 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v20) >> 9) + 0x38) != 0 )
            *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v20) >> 9) + 0x38) = 0;
        }
      }
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
