// sub_15977E0
// rva 0x015977e0  size 478  section .text  group text
// window base 0x1815977e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_15977E0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  _DWORD *v4; // r14
  __int64 v5; // r15
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *result; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  unsigned __int64 v23; // rbx
  __int64 v24; // [rsp+0h] [rbp-28h] BYREF
  __int64 v25; // [rsp+10h] [rbp-18h]
  __int64 v26; // [rsp+18h] [rbp-10h]
  _DWORD *v27; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v5 + 8) )
  {
    v27 = a3;
    sub_1EB84E0();
  }
  else if ( a3 != v4 )
  {
    v6 = (unsigned int)a3[2];
    v27 = a3;
    v7 = sub_57A97E0(a1, a2, a3, a4, a5: 0, a6: v6);
    v11 = sub_5BBDC60(a1: v9, a2: v10, a3: v7, a4: v8, a5: v4 + 94153240);
    v15 = sub_5BBDC60(a1: v13, a2: v14, a3: v11, a4: v12, a5: v4 + 94153244);
    v18 = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(v18 + 32) > *(_QWORD *)(v5 + 32) )
    {
      v26 = v15;
      v18 = sub_1EAA920(a1: v16, a2: v17, a3: 34234224);
      v15 = v26;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v18 + 32;
      *(_DWORD *)v18 = 34234224;
      *(_DWORD *)(v18 + 4) = 0;
      *(_QWORD *)(v18 + 8) = 0;
      *(_QWORD *)(v18 + 16) = 0;
      *(_QWORD *)(v18 + 24) = 0;
    }
    *(_DWORD *)(v18 + 20) = 47032145;
    *(_DWORD *)(v18 + 16) = 47066280;
    *(_DWORD *)(v18 + 12) = 47066282;
    *(_DWORD *)(v18 + 8) = 47066284;
    v19 = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(v19 + 24) > *(_QWORD *)(v5 + 32) )
    {
      v25 = v18;
      v26 = v15;
      v19 = sub_1EAA920(a1: v16, a2: v17, a3: 34960760);
      v18 = v25;
      v15 = v26;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v19 + 24;
      *(_DWORD *)v19 = 34960760;
      *(_DWORD *)(v19 + 4) = 0;
      *(_QWORD *)(v19 + 8) = 0;
      *(_QWORD *)(v19 + 16) = 0;
    }
    *(_DWORD *)(v19 + 12) = 45668443;
    *(_DWORD *)(v19 + 8) = 45727798;
    *(_DWORD *)(v19 + 4) = 46580490;
    *(_DWORD *)(v18 + 4) = (unsigned __int64)(v19 - (_QWORD)v4) >> 3;
    if ( (*(_DWORD *)v18 & 2) != 0 )
    {
      v23 = (v18 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v18 & 0xFFFFFFFFFFF80000LL) + ((v18 - v23) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v18 & 0xFFFFFFFFFFF80000LL) + ((v18 - v23) >> 9) + 0x38) = 0;
    }
    result = (_DWORD *)sub_5BBC400(a1: v16, a2: v17, a3: v15, a4: v18, a5: v18);
    if ( result != v4 && *result >> 3 != 4260335 )
      goto LABEL_19;
    if ( *(int *)(v5 + 16) <= 0 )
      return (_DWORD *)sub_277F280();
    return result;
  }
  v27 = a3;
  result = (_DWORD *)sub_2771080();
LABEL_19:
  sub_276FC00(a1: v21, a2: v22, a3: result, a4: v27, a5: v4 + 8520670);
  __builtin_debugtrap();
  __builtin_debugtrap();
  return (_DWORD *)sub_15979C0();
}
