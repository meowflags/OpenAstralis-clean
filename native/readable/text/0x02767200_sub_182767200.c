// sub_2767200
// rva 0x02767200  size 1417  section .text  group text
// window base 0x182767200: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2767200(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  __int64 result; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // edi
  int v10; // esi
  int v11; // r8d
  int v12; // r9d
  int v13; // edx
  int v14; // ecx
  int v15; // edi
  int v16; // esi
  int v17; // r8d
  int v18; // r9d
  int v19; // edx
  int v20; // ecx
  int v21; // edi
  int v22; // esi
  int v23; // r8d
  int v24; // r9d
  int v25; // edx
  int v26; // ecx
  int v27; // edi
  int v28; // esi
  int v29; // r8d
  int v30; // r9d
  int v31; // edx
  int v32; // ecx
  int v33; // edi
  int v34; // esi
  int v35; // r8d
  int v36; // r9d
  int v37; // edx
  int v38; // ecx
  int v39; // edi
  int v40; // esi
  int v41; // r8d
  int v42; // r9d
  char v43; // [rsp+0h] [rbp-18h] BYREF
  __int64 v44; // [rsp+8h] [rbp-10h]
  int v45; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v43 <= *(_QWORD *)(v5 + 8) )
  {
    v45 = a3;
    sub_1EB84E0();
    sub_2771080(a1: v9, a2: v10, a3: v7, a4: v8, a5: v11, a6: v12, a7: v43);
    v45 = v13;
    sub_2771080(a1: v15, a2: v16, a3: v13, a4: v14, a5: v17, a6: v18, a7: v43);
    sub_2771080(a1: v21, a2: v22, a3: v19, a4: v20, a5: v23, a6: v24, a7: v43);
    sub_2771080(a1: v27, a2: v28, a3: v25, a4: v26, a5: v29, a6: v30, a7: v43);
    sub_2771080(a1: v33, a2: v34, a3: v31, a4: v32, a5: v35, a6: v36, a7: v43);
    sub_2771080(a1: v39, a2: v40, a3: v37, a4: v38, a5: v41, a6: v42, a7: v43);
    __halt();
  }
  v44 = a5;
  if ( (unsigned int)a3 <= 0x73 )
    __asm { jmp     rax; switch jump }
  v45 = a3;
  if ( *(int *)(v5 + 16) <= 0 )
    return sub_277F280(a1, a2, a3);
  return result;
}
