// sub_181E63960
// rva 0x01e63960  size 413  section .text  group text
// window base 0x181e63960: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_181E63960(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _DWORD *v10; // r14
  __int64 v11; // r15
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  _DWORD *result; // rax
  __int64 v16; // rsi
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF
  __int64 v18; // [rsp+10h] [rbp-18h]
  __int64 v19; // [rsp+18h] [rbp-10h]
  unsigned int v20; // [rsp+20h] [rbp-8h]
  unsigned int v21; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v11 + 8) )
  {
    v21 = a6;
    v19 = a5;
    v20 = a3;
    result = (_DWORD *)MEMORY[0x181EB84E0]();
    goto LABEL_12;
  }
  v12 = *(_QWORD *)(v11 + 40);
  if ( (unsigned __int64)(v12 + 24) > *(_QWORD *)(v11 + 32) )
  {
    v21 = a6;
    v19 = a5;
    v20 = a3;
    v12 = MEMORY[0x181EAA920](a1: v12, a2, a3: 40451336);
    a6 = v21;
    a5 = v19;
    a3 = v20;
  }
  else
  {
    *(_QWORD *)(v11 + 40) = v12 + 24;
    *(_DWORD *)v12 = 40451336;
    *(_DWORD *)(v12 + 4) = 0;
    *(_QWORD *)(v12 + 8) = 0;
    *(_QWORD *)(v12 + 16) = 0;
  }
  *(_QWORD *)(v12 + 8) = (int)a3;
  *(_DWORD *)(v12 + 4) = (unsigned __int64)(a5 - (_QWORD)v10) >> 3;
  v13 = *(_QWORD *)(v11 + 40);
  v14 = v13 + 24;
  if ( (unsigned __int64)(v13 + 24) > *(_QWORD *)(v11 + 32) )
    return (_DWORD *)sub_181E63A5C(a1: v12, a2, a3, a4: v14, a5, a6, a7, a8, a9, a10);
  *(_QWORD *)(v11 + 40) = v14;
  *(_DWORD *)v13 = 40451584;
  *(_DWORD *)(v13 + 4) = 0;
  *(_QWORD *)(v13 + 8) = 0;
  *(_QWORD *)(v13 + 16) = 0;
  v19 = a5;
  v20 = a3;
  *(_DWORD *)(v13 + 8) = a6;
  *(_DWORD *)(v13 + 4) = (unsigned __int64)(v12 - (_QWORD)v10) >> 3;
  v18 = v12;
  v21 = a6;
  result = (_DWORD *)sub_181E61720(a1: a6, a2, a3: v12, a4: a6, a5: v10 + 8524030, a6: v13);
  if ( result != v10 && *result >> 3 != 4260673 )
  {
LABEL_12:
    MEMORY[0x18276FC00](a1: v18, a2: v16, a3: result, a4: v20, a5: v10 + 8521346, a6: v21);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return (_DWORD *)sub_181E63B00();
  }
  if ( *(int *)(v11 + 16) <= 0 )
    return (_DWORD *)MEMORY[0x18277F280]();
  return result;
}
