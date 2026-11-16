// sub_132BE03C
// rva 0x132be03c  size 292  section .text  group text
// window base 0x1932be03c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_132BE03C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 i; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // rdi
  int v21; // esi
  __int64 v22; // rdi
  __int64 v23; // rsi
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // [rsp+0h] [rbp-38h]
  __int64 v30; // [rsp+0h] [rbp-38h]
  __int64 v31; // [rsp+0h] [rbp-38h]
  __int64 v32; // [rsp+8h] [rbp-30h]
  __int64 v33; // [rsp+8h] [rbp-30h]
  __int64 v34; // [rsp+8h] [rbp-30h]
  __int64 v35; // [rsp+10h] [rbp-28h]
  __int64 v36; // [rsp+10h] [rbp-28h]
  __int64 v37; // [rsp+10h] [rbp-28h]
  __int64 v38; // [rsp+18h] [rbp-20h]
  __int64 v39; // [rsp+18h] [rbp-20h]
  __int64 v40; // [rsp+18h] [rbp-20h]

  v6 = a5;
  if ( __imp_api-ms-win-crt-stdio-l1-1-0.dll!__acrt_iob_func != 0 )
  {
    sub_1329E880(a1, a2, a3: a4, a4: 545448, a5, a6, a7: v29, a8: v32, a9: v35, a10: v38);
    for ( i = 0; (unsigned int)i < v6; i = (unsigned int)(i + 16) )
    {
      sub_1329E880(
        a1: v9,
        a2: v10,
        a3: (unsigned int)i,
        a4: 545464,
        a5: v11,
        a6: v12,
        a7: v30,
        a8: v33,
        a9: v36,
        a10: v39);
      v17 = 0;
      v18 = (unsigned int)i;
      do
      {
        if ( v17 == 8 )
          sub_1329E880(a1: 8, a2: v18, a3: v14, a4: 545472, a5: v15, a6: v16, a7: v31, a8: v34, a9: v37, a10: v40);
        if ( (unsigned int)v18 >= v6 )
        {
          sub_1329E880(a1: v17, a2: v18, a3: v14, a4: 545484, a5: v15, a6: v16, a7: v31, a8: v34, a9: v37, a10: v40);
          v19 = (unsigned int)i;
        }
        else
        {
          v19 = (unsigned int)i;
          sub_1329E880(
            a1: v17,
            a2: v18,
            a3: *(unsigned __int8 *)(i + a3 + v17),
            a4: 545476,
            a5: v15,
            a6: v16,
            a7: v31,
            a8: v34,
            a9: v37,
            a10: v40);
        }
        v18 = (unsigned int)(v21 + 1);
        v17 = v20 + 1;
      }
      while ( v17 < 16 );
      v22 = 0;
      v23 = (unsigned int)i;
      do
      {
        if ( (unsigned int)v23 < v6 )
        {
          v24 = *(unsigned __int8 *)(v19 + a3 + v22);
          if ( (unsigned int)(v24 - 32) > 0x5F )
            sub_1329E880(a1: v22, a2: v23, a3: v14, a4: 545488, a5: v15, a6: v16, a7: v31, a8: v34, a9: v37, a10: v40);
          else
            sub_1329E880(
              a1: v22,
              a2: v23,
              a3: (unsigned int)(char)v24,
              a4: 545492,
              a5: v15,
              a6: v16,
              a7: v31,
              a8: v34,
              a9: v37,
              a10: v40);
        }
        v23 = (unsigned int)(v23 + 1);
        ++v22;
      }
      while ( v22 < 16 );
      sub_1329E880(a1: v22, a2: v23, a3: v14, a4: 545496, a5: v15, a6: v16, a7: v31, a8: v34, a9: v37, a10: v40);
    }
    v25 = __imp_api-ms-win-crt-stdio-l1-1-0.dll!fflush(a1: v9, a2: v10, a3: v8, a4: 1);
    MEMORY[0x79c20]/* 0x79c20 */(a1: v27, a2: v28, a3: v26, a4: v25);
  }
}
