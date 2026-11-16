// sub_18504AC60
// rva 0x0504ac60  size 444  section .text  group text
// window base 0x18504ac60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_18504AC60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  _DWORD *v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  _DWORD *result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64, _DWORD *); // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 (__fastcall *v20)(__int64, __int64, _DWORD *); // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // [rsp+0h] [rbp-48h] BYREF
  int v29; // [rsp+14h] [rbp-34h]
  _DWORD *v30; // [rsp+18h] [rbp-30h]
  _DWORD *v31; // [rsp+20h] [rbp-28h]
  _DWORD *v32; // [rsp+28h] [rbp-20h]
  __int64 v33; // [rsp+30h] [rbp-18h]
  void (__fastcall *v34)(__int64, __int64, _DWORD *, __int64, __int64); // [rsp+38h] [rbp-10h]
  __int64 (__fastcall *v35)(__int64, __int64, _DWORD *); // [rsp+40h] [rbp-8h]

  v33 = a3;
  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_22;
  }
  v6 = *(unsigned int *)(a3 + 8);
  if ( (_DWORD)v6 == 0 )
  {
LABEL_22:
    MEMORY[0x182771080]();
LABEL_23:
    MEMORY[0x182771080]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return (_DWORD *)sub_18504AE20();
  }
  v35 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v3 + *(_QWORD *)&v4[2 * (v4[2 * v6] >> 3) + 32]);
  v32 = &v4[2 * v6];
  result = (_DWORD *)v35(a1, a2, a3: v32);
  if ( result != v4 )
  {
    v11 = *result >> 3;
    if ( SHIWORD(v4[2 * v11 + 15]) < 4 || v4[2 * v4[2 * v11 + 4] + 6] != 70160 )
      result = (_DWORD *)MEMORY[0x18276FC00](a1: v9, a2: v10, a3: result, a4: v8, a5: v4 + 10827478);
  }
  if ( result != v4 )
  {
    v12 = *(unsigned int *)(v33 + 4);
    v13 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v3 + *(_QWORD *)&v4[2 * (*result >> 3) + 46]);
    v31 = &v4[2 * v12];
    v30 = result;
    v29 = v12;
    v14 = v13(a1: v9, a2: v10, a3: result);
    if ( v29 != 0 )
    {
      v34 = (void (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64))(v3
                                                                              + *(_QWORD *)&v4[2 * (v4[2 * v29] >> 3)
                                                                                             + 162]);
      v34(a1: v15, a2: v16, a3: v31, a4: (__int64)v34, a5: v14);
      while ( 1 )
      {
        result = (_DWORD *)v35(a1: v17, a2: v18, a3: v32);
        if ( result != v4 )
        {
          v19 = *result >> 3;
          if ( SHIWORD(v4[2 * v19 + 15]) < 4 || v4[2 * v4[2 * v19 + 4] + 6] != 70160 )
            break;
        }
        if ( result == v4 )
          goto LABEL_15;
        v20 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v3 + *(_QWORD *)&v4[2 * (*result >> 3) + 46]);
        v30 = result;
        v21 = v20(a1: v26, a2: v27, a3: result);
        v34(a1: v23, a2: v24, a3: v31, a4: v22, a5: v21);
      }
      v30 = result;
      MEMORY[0x18276FC00](a1: v26, a2: v27, a3: result, a4: v25, a5: v4 + 10827478);
      return (_DWORD *)MEMORY[0x18277F280]();
    }
    goto LABEL_23;
  }
LABEL_15:
  if ( *(int *)(v5 + 16) <= 0 )
    return (_DWORD *)MEMORY[0x18277F280]();
  return result;
}
