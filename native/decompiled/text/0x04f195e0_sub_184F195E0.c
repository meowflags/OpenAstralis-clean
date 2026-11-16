// sub_184F195E0
// rva 0x04f195e0  size 939  section .text  group text
// window base 0x184f195e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F195E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char *a6, char a7)
{
  __int64 v7; // r13
  char *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 result; // rax
  __int64 (__fastcall *v20)(__int64, __int64, char *); // rax
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // rcx
  int v26; // edx
  int v27; // ecx
  int v28; // edi
  int v29; // esi
  int v30; // r8d
  int v31; // r9d
  char v32; // [rsp+0h] [rbp-28h] BYREF
  __int64 v33; // [rsp+8h] [rbp-20h]
  char *v34; // [rsp+10h] [rbp-18h]
  _DWORD *v35; // [rsp+18h] [rbp-10h]
  int v36; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v32 <= *(_QWORD *)(v9 + 8) )
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
    return sub_184F199A0(a1: v28, a2: v29, a3: v26, a4: v27, a5: v30, a6: v31, a7);
  }
  else
  {
    v35 = (_DWORD *)a3;
    v10 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v10 + 16) > *(_QWORD *)(v9 + 32) )
    {
      v34 = a6;
      v36 = a5;
      v10 = MEMORY[0x181EAA920](a1, a2, a3: 34085496);
      a6 = v34;
      a5 = v36;
      a3 = (__int64)v35;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v10 + 16;
      *(_DWORD *)v10 = 34085496;
      *(_DWORD *)(v10 + 4) = 0;
      *(_QWORD *)(v10 + 8) = 0;
    }
    *(_DWORD *)(a3 + 8) = (unsigned __int64)(v10 - (_QWORD)v8) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v21 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v21) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v21) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 4) = (unsigned __int64)(a6 - v8) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v23 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v23) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v23) >> 9) + 0x38) = 0;
    }
    *(_BYTE *)(a3 + 14) = 0;
    *(_BYTE *)(a3 + 15) = 0;
    *(_BYTE *)(a3 + 13) = MEMORY[0xEA6E108] & a5;
    if ( a6 == v8 )
    {
      v34 = a6;
      v36 = a5;
      v12 = (__int64)(v8 + 376359568);
      a3 = (__int64)v35;
    }
    else
    {
      v11 = *(_DWORD *)a6 >> 3;
      if ( *(__int16 *)&v8[8 * v11 + 62] < 4 )
      {
        v12 = (__int64)(v8 + 376359568);
        v34 = a6;
        v36 = a5;
      }
      else if ( *(_DWORD *)&v8[8 * *(unsigned int *)&v8[8 * v11 + 16] + 24] == 87998 )
      {
        v36 = a5;
        v20 = (__int64 (__fastcall *)(__int64, __int64, char *))(v7 + *(_QWORD *)&v8[8 * (*(_DWORD *)a6 >> 3) + 240]);
        v34 = a6;
        v12 = v20(a1, a2, a3: a6);
        a3 = (__int64)v35;
      }
      else
      {
        v12 = (__int64)(v8 + 376359568);
        v34 = a6;
        v36 = a5;
      }
    }
    *(_DWORD *)(a3 + 20) = (unsigned __int64)(v12 - (_QWORD)v8) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v25 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v25) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v25) >> 9) + 0x38) = 0;
    }
    v13 = *(_QWORD *)(v9 + 40);
    if ( v13 + 24 > *(_QWORD *)(v9 + 32) )
    {
      v33 = v12;
      v13 = MEMORY[0x181EAA920](a1, a2, a3: 34241520);
      v12 = v33;
      v14 = (__int64)v35;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v13 + 24;
      *(_DWORD *)v13 = 34241520;
      *(_DWORD *)(v13 + 4) = 0;
      *(_QWORD *)(v13 + 8) = 0;
      *(_QWORD *)(v13 + 16) = 0;
      v14 = a3;
    }
    v33 = v13;
    sub_184F18980(a1, a2, a3: v13, a4: v14, a5: v14, a6: v12, a7: v32);
    v17 = (unsigned __int64)v35;
    v35[7] = (unsigned __int64)(v33 - (_QWORD)v8) >> 3;
    if ( (*(_DWORD *)v17 & 2) != 0 )
    {
      v24 = (v17 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v24) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v24) >> 9) + 0x38) = 0;
    }
    v18 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v18 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v18 = MEMORY[0x181EAA920](a1: v15, a2: v16, a3: 34241872);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v18 + 40;
      *(_DWORD *)v18 = 34241872;
      *(_DWORD *)(v18 + 4) = 0;
      *(_QWORD *)(v18 + 8) = 0;
      *(_QWORD *)(v18 + 16) = 0;
      *(_QWORD *)(v18 + 24) = 0;
      *(_QWORD *)(v18 + 32) = 0;
    }
    v33 = v18;
    MEMORY[0x184EB4E20]();
    result = (__int64)v35;
    v35[6] = (unsigned __int64)(v33 - (_QWORD)v8) >> 3;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v22 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v22) >> 9) + 0x38) != 0 )
        *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v22) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
