// sub_19329B740
// rva 0x1329b740  size 380  section .text  group text
// window base 0x19329b740: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_19329B740(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  _DWORD *result; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // [rsp+0h] [rbp-28h] BYREF
  __int64 v25; // [rsp+8h] [rbp-20h]
  __int64 v26; // [rsp+10h] [rbp-18h]
  __int64 v27; // [rsp+18h] [rbp-10h]
  __int64 v28; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v24 <= *(_QWORD *)(v8 + 8) )
  {
    while ( 1 )
    {
      v28 = a3;
      v20 = MEMORY[0x181EB84E0]();
      v23 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v23 + 40) > *(_QWORD *)(v8 + 32) )
      {
        v26 = v20;
        v23 = MEMORY[0x181EAA920](a1: v21, a2: v22, a3: 34909680);
        v20 = v26;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v23 + 40;
        *(_DWORD *)v23 = 34909680;
        *(_DWORD *)(v23 + 4) = 0;
        *(_QWORD *)(v23 + 8) = 0;
        *(_QWORD *)(v23 + 16) = 0;
        *(_QWORD *)(v23 + 24) = 0;
        *(_QWORD *)(v23 + 32) = 0;
      }
      v26 = v20;
      v25 = v23;
      MEMORY[0x18503ACA0](a1: v21, a2: v22, a3: v23, a4: v23, a5: v20);
      MEMORY[0x182769900](a1: v18, a2: v19, a3: v25, a4: v17, a5: &a7);
    }
  }
  v28 = a3;
  v9 = MEMORY[0x184F61EE0](a1, a2, a3: v7 + 95217836, a4, a5: a3);
  if ( (_DWORD *)v9 == v7 || *(__int16 *)(v9 + 62) < 2 || v7[2 * *(unsigned int *)(v9 + 16) + 4] != 5998 )
  {
    if ( *(int *)(v8 + 16) <= 0 )
    {
      v27 = v9;
      MEMORY[0x18277F280]();
    }
    return v7;
  }
  else
  {
    v27 = v9;
    result = (_DWORD *)MEMORY[0x184F69F20](a1: v10, a2: v11, a3: v9);
    if ( result != v7 )
    {
      v16 = *result >> 3;
      if ( SHIWORD(v7[2 * v16 + 15]) < 2 || v7[2 * v7[2 * v16 + 4] + 4] != 5998 )
        result = (_DWORD *)MEMORY[0x18276FC00](a1: v14, a2: v15, a3: result, a4: v13, a5: v7 + 8715116);
    }
    if ( *(int *)(v8 + 16) <= 0 )
      return (_DWORD *)MEMORY[0x18277F280]();
  }
  return result;
}
