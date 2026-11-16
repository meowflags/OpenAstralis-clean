// sub_18159A040
// rva 0x0159a040  size 288  section .text  group text
// window base 0x18159a040: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_QWORD *__fastcall sub_18159A040(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  _QWORD *result; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // [rsp+0h] [rbp-38h] BYREF
  __int64 v31; // [rsp+8h] [rbp-30h]
  __int64 v32; // [rsp+10h] [rbp-28h]
  _QWORD *v33; // [rsp+18h] [rbp-20h]
  _QWORD *v34; // [rsp+20h] [rbp-18h]
  __int64 v35; // [rsp+28h] [rbp-10h]
  int v36; // [rsp+34h] [rbp-4h]

  v36 = a5;
  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v7 + 8) )
  {
    MEMORY[0x181EB83C0]();
    return (_QWORD *)sub_18159A160();
  }
  else
  {
    v35 = a6;
    result = (_QWORD *)sub_18159CC00(a1, a2, a3: a6);
    if ( result != nullptr )
    {
      v11 = *result;
      v34 = result + 1;
      v33 = result;
      v32 = v11;
      v31 = v6 + 376612120;
      MEMORY[0x1820841E0](a1: v9, a2: v10, a3: v6 + 376612120);
      v15 = MEMORY[0x182084840](a1: v13, a2: v14, a3: v31, a4: v12, a5: v6 + 367027008);
      v19 = MEMORY[0x182084A00](a1: v17, a2: v18, a3: v15, a4: v16, a5: (char *)v34 - v35);
      v23 = MEMORY[0x182084840](a1: v21, a2: v22, a3: v19, a4: v20, a5: v6 + 372666776);
      MEMORY[0x1820841E0](a1: v24, a2: v25, a3: v23);
      *(_DWORD *)(v6 + 376613252) = v36;
      *(_DWORD *)(v6 + 376613256) = 0;
      *(_QWORD *)(v6 + 376613240) = 0;
      *(_DWORD *)(v6 + 376613248) = -5;
      result = (_QWORD *)MEMORY[0x182774360](a1: v6 + 376613232, a2: v31, a3: v7, a4: v26, a5: v34, a6: v32);
      if ( *(int *)(v7 + 16) <= 0 )
        return (_QWORD *)MEMORY[0x18277F280](a1: v28, a2: v29, a3: v27, a4: v33);
    }
    else if ( *(int *)(v7 + 16) <= 0 )
    {
      return (_QWORD *)MEMORY[0x18277F280]();
    }
  }
  return result;
}
