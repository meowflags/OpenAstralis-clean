// sub_182766EC0
// rva 0x02766ec0  size 309  section .text  group text
// window base 0x182766ec0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182766EC0(__int64 a1, __int64 a2, int a3, int a4, _DWORD *a5, int a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  unsigned int v17; // edx
  __int64 result; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  char v21; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v22; // [rsp+8h] [rbp-30h]
  unsigned int v23; // [rsp+14h] [rbp-24h]
  unsigned int v24; // [rsp+18h] [rbp-20h]
  unsigned int v25; // [rsp+1Ch] [rbp-1Ch]
  __int64 (__fastcall *v26)(__int64, __int64, _DWORD *); // [rsp+20h] [rbp-18h]
  int v27; // [rsp+28h] [rbp-10h]
  int v28; // [rsp+2Ch] [rbp-Ch]
  __int64 v29; // [rsp+30h] [rbp-8h]

  v28 = a3;
  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_13;
  }
  v22 = a5;
  if ( a3 >= 1 )
  {
    if ( a5 != v7 )
    {
      v26 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v6 + *(_QWORD *)&v7[2 * (*a5 >> 3) + 102]);
      v25 = v26(a1, a2, a3: a5);
      sub_182767200(a1: v10, a2: v11, a3: v25, a4: v9, a5: v22);
      v29 = v6;
      v24 = v25;
      v13 = 1;
      while ( v28 > v13 )
      {
        v25 = v13;
        v23 = v26(a1: v12, a2: (__int64)v26, a3: v22);
        sub_182767200(a1: v15, a2: v16, a3: v23, a4: v14, a5: v22);
        v13 = v25 + 1;
        v29 = v6;
        v24 = v23;
      }
      v27 = v13;
      v17 = v24;
      goto LABEL_8;
    }
LABEL_13:
    sub_182771080(a1, a2, a3, a4, (_DWORD)a5, a6, a7: v21);
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
    return sub_182767000();
  }
  v27 = 0;
  v17 = 0;
LABEL_8:
  v24 = v17;
  result = MEMORY[0x18C965A80]();
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_18277F280(a1: v19, a2: v20, a3: v24);
  return result;
}
