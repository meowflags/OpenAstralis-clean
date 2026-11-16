// sub_5045840
// rva 0x05045840  size 279  section .text  group text
// window base 0x185045840: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5045840(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  _DWORD *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // edx
  int v19; // ecx
  int v20; // edi
  int v21; // esi
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v25; // [rsp+10h] [rbp-18h]
  unsigned __int64 v26; // [rsp+18h] [rbp-10h]
  __int64 v27; // [rsp+20h] [rbp-8h]

  v26 = a3;
  v27 = a5;
  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB84E0();
LABEL_20:
    sub_2771080();
    goto LABEL_21;
  }
  if ( *(_DWORD *)(a3 + 136) == 99 )
  {
    if ( *(int *)(v9 + 16) <= 0 )
      sub_277F280();
    return 1;
  }
  else
  {
    v10 = (_DWORD *)sub_5045120(a1, a2, a3);
    v25 = v10;
    if ( *(_DWORD *)(v26 + 136) == 99 )
    {
      if ( *(int *)(v9 + 16) <= 0 )
        sub_277F280();
      return 1;
    }
    else
    {
      if ( v27 != 0 )
      {
        if ( v10 != v8 )
        {
          v13 = *(_QWORD *)&v8[2 * (*v10 >> 3) + 30];
          result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64, _DWORD *))(v7 + v13))(
                     a1: v11,
                     a2: v12,
                     a3: v10,
                     a4: v13,
                     a5: v27,
                     a6: v8 + 94091826);
          if ( *(int *)(v9 + 16) <= 0 )
            return sub_277F280(a1: v16, a2: v17, a3: v15, a4: v25);
          return result;
        }
        goto LABEL_20;
      }
      if ( v10 == v8 )
      {
LABEL_21:
        sub_2771080();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        return sub_5045960(a1: v20, a2: v21, a3: v18, a4: v19, a5: v22, a6: v23, a7);
      }
      ((void (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*v10 >> 3) + 28]))(
        a1: v11,
        a2: v12,
        a3: v10);
      if ( *(int *)(v9 + 16) <= 0 )
        sub_277F280();
      return 1;
    }
  }
}
