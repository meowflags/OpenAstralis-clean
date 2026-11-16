// sub_184F403E0
// rva 0x04f403e0  size 523  section .text  group text
// window base 0x184f403e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_184F403E0(__int64 a1, __int64 a2, char *a3, __int64 a4, char *a5)
{
  __int64 v5; // r13
  char *v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // rdx
  __int64 (*v9)(void); // rbx
  unsigned __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rbp
  __int64 v18; // [rsp+0h] [rbp-28h] BYREF
  int v19; // [rsp+Ch] [rbp-1Ch]
  __int64 v20; // [rsp+10h] [rbp-18h]
  char *v21; // [rsp+18h] [rbp-10h]
  char *v22; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
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
    return sub_184F40600();
  }
  else
  {
    v22 = a3;
    v21 = a5;
    if ( a5 == v6 )
      v20 = (__int64)(v6 + 353301280);
    else
      v20 = ((__int64 (__fastcall *)(__int64, __int64, char *))(v5 + *(_QWORD *)&v6[8 * (*(_DWORD *)a5 >> 3) + 104]))(
              a1,
              a2,
              a3: a5);
    v8 = (unsigned __int64)v22;
    *((_DWORD *)v22 + 3) = (unsigned __int64)(v22 - v6) >> 3;
    if ( (*(_DWORD *)v8 & 2) != 0 )
    {
      v15 = (v8 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v15) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v15) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v8 + 16) = *((_DWORD *)v6 + 93585974);
    if ( (*(_DWORD *)v8 & 2) != 0 )
    {
      v17 = (v8 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v17) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v17) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v8 + 20) = 46923644;
    if ( (*(_DWORD *)v8 & 2) != 0 )
    {
      v16 = (v8 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v16) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v16) >> 9) + 0x38) = 0;
    }
    v9 = (__int64 (*)(void))(v5 + *(_QWORD *)&v6[8 * (*(_DWORD *)v8 >> 3) + 112]);
    v19 = *(_DWORD *)v8 >> 3;
    result = v9();
    v13 = (unsigned __int64)v22;
    *((_DWORD *)v22 + 2) = (unsigned __int64)(v20 - (_QWORD)v6) >> 3;
    if ( (*(_DWORD *)v13 & 2) != 0 )
    {
      result = (v13 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + ((v13 - result) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + ((v13 - result) >> 9) + 0x38) = 0;
    }
    if ( v21 != v6 )
    {
      v14 = *(_DWORD *)v21 >> 3;
      if ( *(__int16 *)&v6[8 * v14 + 62] >= 2 && *(_DWORD *)&v6[8 * *(unsigned int *)&v6[8 * v14 + 16] + 16] == 27283 )
        result = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64))(v5 + *(_QWORD *)&v6[8 * v19 + 152]))(
                   a1: v11,
                   a2: v12,
                   a3: v13);
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
